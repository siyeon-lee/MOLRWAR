// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MLGameInstance.generated.h"

/**
 * 
 */
class UMLGameInstanceObject;

UCLASS()
class MOLEWAR_API UMLGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	template<typename T>
		T* GetInstance();

	template<typename T = UMLGameInstanceObject>
		bool AddInstance(T* Inst);

protected:
	virtual void Init() override;
	virtual void OnStart() override;
	virtual void Shutdown() override;

private:
	void CreateInstances();
	void PreWorldActorTick(UWorld* InWorld, ELevelTick InLevelTick, float InDeltaSeconds);

private:
	UPROPERTY(Transient)
		TMap<FName, UMLGameInstanceObject*> m_InstanceList;

	FDelegateHandle m_PreWorldActorTickHandle;	//MLObject 틱 돌리기 위함
};

#pragma region Template
template<typename T>
T* UMLGameInstance::GetInstance()
{
	const FName key = T::StaticClass()->GetFName();

	if (m_InstanceList.Contains(key) == false)
		return nullptr;
	return Cast<T>(m_InstanceList[key]);
}

template<typename T>
bool UMLGameInstance::AddInstance(T* Inst)
{
	const FName key = T::StaticClass()->GetFName();
	if (m_InstanceList.Find(key) != nullptr)
		return false;

	m_InstanceList.Add(key, Inst);
	return true;
}
#pragma endregion  //Template
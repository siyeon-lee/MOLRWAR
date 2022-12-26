// Fill out your copyright notice in the Description page of Project Settings.


#include "GameInstance/MLGameInstance.h"
#include "GameInstance/MLGameInstanceObject.h"

#include "InputEventer/MLInputEventer.h"

//> protected =======================================================
void UMLGameInstance::Init()
{
	Super::Init();
	m_PreWorldActorTickHandle = FWorldDelegates::OnWorldPreActorTick.AddUObject(this, &UMLGameInstance::PreWorldActorTick);

	m_InstanceList.Empty();
	CreateInstances();
}

void UMLGameInstance::OnStart()
{
	for (TPair<FName, UMLGameInstanceObject*> InstancePair : m_InstanceList)
	{
		UMLGameInstanceObject* InstanceObject = InstancePair.Value;
		if (InstanceObject == nullptr || InstanceObject->IsValidLowLevel() == false)
		{
			continue;
		}
		InstanceObject->Init();
	}
}

void UMLGameInstance::Shutdown()
{
	for (TPair<FName, UMLGameInstanceObject*> InstancePair : m_InstanceList)
	{
		UMLGameInstanceObject* InstanceObject = InstancePair.Value;
		if (InstanceObject == nullptr || InstanceObject->IsValidLowLevel() == false)
		{
			continue;
		}
		InstanceObject->Release();
	}

	FWorldDelegates::OnWorldPreActorTick.Remove(m_PreWorldActorTickHandle);

	//마지막에 호출
	Super::Shutdown();
}
//< protected ======================================

//> private ========================================
void UMLGameInstance::PreWorldActorTick(UWorld* InWorld, ELevelTick InLevelTick, float InDeltaSeconds)
{

}

void UMLGameInstance::CreateInstances()
{
	if (IsDedicatedServerInstance() == true)
	{
		//Server Only
	}
	else
	{
		AddInstance<UMLInputEventer>(NewObject<UMLInputEventer>(this));
	}
}
//< private ========================================
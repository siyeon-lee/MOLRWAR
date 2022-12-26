// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MLCharacterSpawner.generated.h"

class UStaticMeshComponent;

UCLASS()
class MOLEWAR_API AMLCharacterSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMLCharacterSpawner();
	virtual void Tick(float DeltaTime) override;

#pragma region Client_ONLY
	void OnNotify_SpawnButtonHold();
	void OnNotify_SpawnButtonReleased();
#pragma endregion
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
private:
	void SpawnActor();

	//RPC 안올것같다.
	UFUNCTION(Server, reliable)
		void Server_SetCurrentButtonPushed(bool InIsPushed);
private:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Collision, meta = (AllowPrivateAccess = "true"))
		UStaticMeshComponent*	m_CollisionBox;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Setting, meta = (AllowPrivateAccess = "true"))
		bool m_IsAutoSpawn;	//데디에서 기본값 체크

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Setting, meta = (AllowPrivateAccess = "true"))
		float m_SpawnTickSecond;

	bool m_IsSpawnInputPushed;

	float m_CurrentTick;

};

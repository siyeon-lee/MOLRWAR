// Fill out your copyright notice in the Description page of Project Settings.


#include "Spawn/MLCharacterSpawner.h"

#include "Components/StaticMeshComponent.h"

#include "MoleWar/MoleWar.h"

// Sets default values
AMLCharacterSpawner::AMLCharacterSpawner()
	: m_IsSpawnInputPushed(false)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_CollisionBox = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionBox"));
	m_CollisionBox->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AMLCharacterSpawner::BeginPlay()
{
	Super::BeginPlay();
}

void AMLCharacterSpawner::SpawnActor()
{
	UWorld* World = GetWorld();
	if (World == nullptr || World->IsValidLowLevel() == false)
	{
		ML_LOG(Error, TEXT("World is Nullptr"));
		return;
	}

	World->SpawnActor<AMLCharacterSpawner>(this->GetActorLocation(), this->GetActorRotation());
}

void AMLCharacterSpawner::Server_SetCurrentButtonPushed_Implementation(bool InIsPushed)
{
	m_IsSpawnInputPushed = InIsPushed;
}

// Called every frame
void AMLCharacterSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (m_IsAutoSpawn == false && m_IsSpawnInputPushed == false)
	{
		return;
	}

	if (GetNetMode() == ENetMode::NM_Client)
	{
		//클라이언트에서는 스폰 할 필요 없다.
		return;
	}

	m_CurrentTick += DeltaTime;
	if (m_CurrentTick < m_SpawnTickSecond)
	{
		return;
	}

	m_CurrentTick = 0;

	if (m_IsAutoSpawn || m_IsSpawnInputPushed)
	{
		SpawnActor();
	}
}

void AMLCharacterSpawner::OnNotify_SpawnButtonHold()
{
}

void AMLCharacterSpawner::OnNotify_SpawnButtonReleased()
{
}


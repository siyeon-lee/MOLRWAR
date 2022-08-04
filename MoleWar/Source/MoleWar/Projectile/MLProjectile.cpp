// Fill out your copyright notice in the Description page of Project Settings.

#include "MLProjectile.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

//>public-----
AMLProjectile::AMLProjectile()
	: CollisionSphereRadius(15.f)
	, InitializeSpeed(3000.0f)
	, MaxSpeed(3000.0f)
	, Boundciness(0.3f)
{
	PrimaryActorTick.bCanEverTick = true;
	m_CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	m_CollisionComponent->InitSphereRadius(CollisionSphereRadius);
	RootComponent = m_CollisionComponent;

	//syeon to do : data asset으로 빼기 (코드 훔쳐와)
	m_ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	m_ProjectileMovementComponent->SetUpdatedComponent(m_CollisionComponent);
	m_ProjectileMovementComponent->InitialSpeed = MaxSpeed;
	m_ProjectileMovementComponent->MaxSpeed = MaxSpeed;
	m_ProjectileMovementComponent->bRotationFollowsVelocity = true;
	m_ProjectileMovementComponent->bShouldBounce = true;
	m_ProjectileMovementComponent->Bounciness = Boundciness;
}

void AMLProjectile::BeginPlay()
{
	Super::BeginPlay();
}

void AMLProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
void AMLProjectile::InitializeSpeedToShootDirection(const FVector & InShootDirection)
{
	m_ProjectileMovementComponent->Velocity = InShootDirection * m_ProjectileMovementComponent->InitialSpeed;
}
//<public-----


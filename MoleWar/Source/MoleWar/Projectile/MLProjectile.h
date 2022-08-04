// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MLProjectile.generated.h"

class USphereComponent;
class UProjectileMovementComponent;

UCLASS()
class MOLEWAR_API AMLProjectile : public AActor
{
	GENERATED_BODY()
public:	
	AMLProjectile();

public:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	void InitializeSpeedToShootDirection(const FVector& InShootDirection);

public:
	UPROPERTY()
		USphereComponent* m_CollisionComponent;
	
	UPROPERTY()
		UProjectileMovementComponent* m_ProjectileMovementComponent;

#pragma region Projecilte data
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ProjectileData)
		float CollisionSphereRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ProjectileData)
		float InitializeSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ProjectileData)
		float MaxSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ProjectileData, meta = (ClampMin = "0", UIMin = "0"))
		float Boundciness;


};

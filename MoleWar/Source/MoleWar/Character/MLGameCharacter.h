// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MLGameCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;

UCLASS(config = Game)
class AMLGameCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AMLGameCharacter();

#pragma region THIRDPERSON_ENGINE_BASE
public:
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
#pragma endregion //THIRDPERSON_ENGINE_BASE


public:
#pragma region THIRDPERSON_ENGINE_BASE
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseTurnRate;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseLookUpRate;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		USpringArmComponent* CameraBoom;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		UCameraComponent* FollowCamera;
#pragma endregion //THIRDPERSON_ENGINE_BASE

#pragma region FLOATER_SETTING_VALUE
public:
	UPROPERTY(BlueprintReadWrite)
	bool bDoesVisibleNameWidget;
	UPROPERTY(BlueprintReadWrite)
	FVector2D WidgetOffset;
#pragma endregion //FLOATER_SETTING_VALUE


};


// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameInstance/MLGameInstanceObject.h"
#include "MLInputEventer.generated.h"

/**
 * 
 */
UCLASS()
class MOLEWAR_API UMLInputEventer : public UMLGameInstanceObject
{
	GENERATED_BODY()
public:
	void OnNotify_SpawnCharacter(bool InButtonHold);

protected:
	virtual void Init() override;
	virtual void Release() override;
};

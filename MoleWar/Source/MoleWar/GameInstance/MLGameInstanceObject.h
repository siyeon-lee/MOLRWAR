// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MLGameInstanceObject.generated.h"

/**
 * 
 */
UCLASS()
class MOLEWAR_API UMLGameInstanceObject : public UObject
{
	GENERATED_BODY()
public:
	virtual void Init(); 
	virtual void Release();
	virtual void Tick(float InDeltaSeconds);
};

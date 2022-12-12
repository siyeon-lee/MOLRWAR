// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "EngineMinimal.h"

DECLARE_LOG_CATEGORY_EXTERN(MoleWar_EditorOnly, Log, All);

#define ML_LOGEdit_CALLINFO (FString(__FUNCTION__) + TEXT("(") + FString::FromInt(__LINE__) + TEXT(")"))

#define ML_LOGEdit(Verbosity, Format, ...) UE_LOG(MoleWar, Verbosity, TEXT("%s %s"), *ML_LOG_CALLINFO, *FString::Printf(Format, ##__VA_ARGS__))
//(CategoryName, Verbosity, Format, ...)

class FMoleWar_EditorOnly : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
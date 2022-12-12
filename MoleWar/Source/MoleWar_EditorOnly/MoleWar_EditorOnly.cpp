// Copyright Epic Games, Inc. All Rights Reserved.

#include "MoleWar_EditorOnly.h"
#include "Modules/ModuleManager.h"

DEFINE_LOG_CATEGORY(MoleWar_EditorOnly);
IMPLEMENT_MODULE(FDefaultModuleImpl, MoleWar_EditorOnly);

void FMoleWar_EditorOnly::StartupModule()
{
	//UE_LOG(Log, TEXT(""));
}

void FMoleWar_EditorOnly::ShutdownModule()
{
	//ML_LOGEdit(Log, TEXT(""));
}

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MLCameraItem_Rotation.generated.h"

struct FMLCameraInfo_AutoAlign;
class AMLCameraActor;
enum class ECharacterCameraStance : uint8;
/**
 * 
 */
UCLASS()
class MOLEWAR_API UMLCameraItem_Rotation : public UObject
{
	GENERATED_BODY()

public:

	/*
	* 카메라와 캐릭터의 일방향 정렬을 위해 사용
	* CameraActor에서 틱마다 OnTick_AutoAlign 호출합니다
	*/
//	UMLCameraItem_Rotation();
//	void OnTick_AutoAlign(float InDeltaTime, AMLCameraActor* InOwnerCamera, FRotator& OutRotator);
//
//public:
//	UPROPERTY(VisiblieAnywhere, BlueprintReadWrite)
//		TMap<ECharacterCameraStance, FMLCameraInfo_AutoAlign> AutoAlignInfoMap;
//private:
//	bool bAutoAlign;
//	//카메라 정렬 대기 시간
//	float AlignWaitTime;	
};

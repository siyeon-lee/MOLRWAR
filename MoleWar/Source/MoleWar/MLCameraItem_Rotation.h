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
	* ī�޶�� ĳ������ �Ϲ��� ������ ���� ���
	* CameraActor���� ƽ���� OnTick_AutoAlign ȣ���մϴ�
	*/
//	UMLCameraItem_Rotation();
//	void OnTick_AutoAlign(float InDeltaTime, AMLCameraActor* InOwnerCamera, FRotator& OutRotator);
//
//public:
//	UPROPERTY(VisiblieAnywhere, BlueprintReadWrite)
//		TMap<ECharacterCameraStance, FMLCameraInfo_AutoAlign> AutoAlignInfoMap;
//private:
//	bool bAutoAlign;
//	//ī�޶� ���� ��� �ð�
//	float AlignWaitTime;	
};

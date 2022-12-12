// Fill out your copyright notice in the Description page of Project Settings.


#include "MLCameraItem_Rotation.h"

#include "Kismet/GameplayStatics.h"

#include "Character/MLGameCharacter.h"
//#include "Camera/MLCameraActor.h"

// > public============================================================
//
//UMLCameraItem_Rotation::UMLCameraItem_Rotation()
//	: bAutoAlign(false)
//{
//	
//}
//
//void UMLCameraItem_Rotation::OnTick_AutoAlign(float InDeltaTime, AMLCameraActor* InOwnerCamera, FRotator& OutRotator)
//{
//	if (bAutoAlign == false)
//	{
//		return;
//	}
//
//	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
//	if (PlayerController == nullptr || PlayerController->IsValidLowLevel() == false)
//	{
//		return;
//	}
//
//	AMLGameCharacter* CameraFollowTargetActor = AMLCameraActor->GetFollowTargetActor();
//	if (CameraFollowTargetActor == nullptr || CameraFollowTargetActor->IsValidLowLevel() == false)
//	{
//		return;
//	}
//
//	//캐릭터의 카메라 스탠스에 따라 다른 값을 사용
//	const ECharacterCameraStance& CurrentCameraStance = CameraFollowTargetActor->GetCameraStance();
//	if (AutoAlignInfoMap.Contains(CurrentCameraStance) == false)
//	{
//		return;
//	}
//
//	const FMLCameraInfo_AutoAlign& CurrentAutoAlignInfo = AutoAlignInfoMap[CurrentCameraStance];
//
//	FRotator CharRot = CameraFollowTargetActor->GetActorRotation();
//	FRotator ControlRot = PlayerController->GetControlRotation();
//	FRotator TargetRot = InOwnerCamera->GetActorRotation();
//
//	float FixedControlRotYaw = FRotator::ClampAxis(ControlRot.Yaw);
//	TargetRot.Yaw = CharRot.Yaw - FixedControlRotYaw;
//
//	//캐릭터의 각도와 카메라 각도의 차이가 특정 이상이라면
//	if (FMath::Abs(TargetRot.Yaw) > CurrentAutoAlignInfo.RotationWaitTime)
//	{
//		// 1. 정렬 대기 시간 증가
//		AlignWaitTime += InDeltaTime;
//
//		//N초 이상 유지되는 경우
//		if (AlignWaitTime > CurrentCameraStance.RotationWaitTime)
//		{
//			if (IsStopAutoAlignConditon(PlayerController, CameraFollowTargetActor) == true)
//			{
//				PlayerController->SetDesireRotation(FRotator::ZeroRotator, 0.f);
//				return;
//			}
//
//			FRotator CurDesiredRot = PlayerController->GetDesiredRotation();
//			CurDesiredRot.Yaw = CameraFollowTargetActor->GetActorRotation().Yaw;
//
//			// 1초 동안 RotationSpeed (0.5 = 50%) 보간
//			PlayerController->GetDesiredRotation(CurrentDesiredRot, CurrentAutoAlignInfo.RotationSpeed);
//		}
//	}
//}
//
//// < public============================================================
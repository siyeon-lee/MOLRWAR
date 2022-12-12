// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneChannel.h"
#include "Channels/MovieSceneChannelData.h"
#include "MLMovieSceneCustomChannel.generated.h"

/**
 * 
 */
USTRUCT()
struct MOLEWAR_API FMLMovieSceneCustomChannel
	: public FMovieSceneChannel
{
	GENERATED_BODY()
	
public:
	FMLMovieSceneCustomChannel()
		: DefaultValue()
	{}
	void SetValue(int InValue) { DefaultValue = InValue; }
	UPROPERTY()
		int DefaultValue;	//whatever
};

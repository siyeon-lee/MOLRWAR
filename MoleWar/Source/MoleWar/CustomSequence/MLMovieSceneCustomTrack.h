// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "MovieSceneTrack.h"
#include "Tracks/MovieScenePropertyTrack.h"
#include "MLMovieSceneCustomTrack.generated.h"

/**
 * 
 */
UCLASS()
class MOLEWAR_API UMLMovieSceneCustomTrack
	: public UMovieScenePropertyTrack
{
	GENERATED_UCLASS_BODY()
public:
	virtual void PostLoad() override;
	virtual bool SupportsType(TSubclassOf<UMovieSceneSection> SectionClass) const override;
	virtual UMovieSceneSection* CreateNewSection() override;
protected:
	UPROPERTY()
		int Integer;
};

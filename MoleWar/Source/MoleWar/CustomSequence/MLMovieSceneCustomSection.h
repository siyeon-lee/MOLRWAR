// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "MovieSceneSection.h"
#include "EntitySystem/IMovieSceneEntityProvider.h"
#include "MoleWar/CustomSequence/MLMovieSceneCustomChannel.h"
#include "MLMovieSceneCustomSection.generated.h"

/**
 * 
 */
UCLASS()
class MOLEWAR_API UMLMovieSceneCustomSection 
	: public UMovieSceneSection
{
	GENERATED_BODY()
	
public:
	//UMLMovieSceneCustomSection(const FObjectInitializer& ObjectInitializer);

	/** Ordered curve data */
	UPROPERTY()
		FMLMovieSceneCustomChannel CustomCurve;

private:

	//~ IMovieSceneEntityProvider interface
	//virtual void ImportEntityImpl(UMovieSceneEntitySystemLinker* EntityLinker, const FEntityImportParams& Params, FImportedEntity* OutImportedEntity) override;
	//virtual bool PopulateEvaluationFieldImpl(const TRange<FFrameNumber>& EffectiveRange, const FMovieSceneEvaluationFieldEntityMetaData& InMetaData, FMovieSceneEntityComponentFieldBuilder* OutFieldBuilder) override;

};

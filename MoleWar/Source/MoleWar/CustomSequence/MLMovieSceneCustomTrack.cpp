#include "MLMovieSceneCustomTrack.h"


#include "MoleWar/CustomSequence/MLMovieSceneCustomSection.h"

UMLMovieSceneCustomTrack::UMLMovieSceneCustomTrack(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UMLMovieSceneCustomTrack::PostLoad()
{
	Super::PostLoad();
}

bool UMLMovieSceneCustomTrack::SupportsType(TSubclassOf<UMovieSceneSection> SectionClass) const
{
	return SectionClass == UMLMovieSceneCustomSection::StaticClass();
}

UMovieSceneSection* UMLMovieSceneCustomTrack::CreateNewSection()
{
	UMLMovieSceneCustomSection* NewEnumSection = NewObject<UMLMovieSceneCustomSection>(this, NAME_None, RF_Transactional);
	NewEnumSection->CustomCurve.SetValue(Integer);
	return NewEnumSection;
}

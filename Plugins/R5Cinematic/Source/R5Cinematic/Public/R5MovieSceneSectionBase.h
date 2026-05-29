#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneSection.h"
#include "R5MovieSceneSectionBase.generated.h"

UCLASS(Blueprintable)
class R5CINEMATIC_API UR5MovieSceneSectionBase : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UR5MovieSceneSectionBase();

};


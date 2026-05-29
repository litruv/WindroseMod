#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "R5MovieSceneTemplateBase.generated.h"

USTRUCT(BlueprintType)
struct FR5MovieSceneTemplateBase : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFireEventsWhenForwards: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFireEventsWhenBackwards: 1;
    
public:
    R5CINEMATIC_API FR5MovieSceneTemplateBase();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneStringChannel -FallbackName=MovieSceneStringChannel
#include "Channels/MovieSceneStringChannel.h"
#include "R5MovieSceneSectionBase.h"
#include "R5MovieSceneTriggerSection.generated.h"

UCLASS(Blueprintable)
class R5CINEMATIC_API UR5MovieSceneTriggerSection : public UR5MovieSceneSectionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneStringChannel StringChannel;
    
    UR5MovieSceneTriggerSection();

};


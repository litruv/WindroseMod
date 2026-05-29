#pragma once
#include "CoreMinimal.h"
#include "R5MovieSceneSectionBase.h"
#include "R5MovieSceneRepeaterSection.generated.h"

UCLASS(Blueprintable)
class R5CINEMATIC_API UR5MovieSceneRepeaterSection : public UR5MovieSceneSectionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventName;
    
    UR5MovieSceneRepeaterSection();

};


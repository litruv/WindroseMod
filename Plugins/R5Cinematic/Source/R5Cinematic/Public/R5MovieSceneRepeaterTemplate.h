#pragma once
#include "CoreMinimal.h"
#include "R5MovieSceneTemplateBase.h"
#include "R5MovieSceneRepeaterTemplate.generated.h"

USTRUCT(BlueprintType)
struct FR5MovieSceneRepeaterTemplate : public FR5MovieSceneTemplateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventName;
    
    R5CINEMATIC_API FR5MovieSceneRepeaterTemplate();
};


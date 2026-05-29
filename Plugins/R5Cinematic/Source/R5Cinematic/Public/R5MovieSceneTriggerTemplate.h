#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "R5MovieSceneTemplateBase.h"
#include "R5MovieSceneTriggerTemplate.generated.h"

USTRUCT(BlueprintType)
struct FR5MovieSceneTriggerTemplate : public FR5MovieSceneTemplateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> EventTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> EventNames;
    
    R5CINEMATIC_API FR5MovieSceneTriggerTemplate();
};


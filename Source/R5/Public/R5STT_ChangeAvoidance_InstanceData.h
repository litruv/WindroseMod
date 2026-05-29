#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Mercuna -ObjectName=EMercunaObstacleReaction -FallbackName=EMercunaObstacleReaction
#include "EMercunaObstacleReaction.h"
#include "R5STT_ChangeAvoidance_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STT_ChangeAvoidance_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCutOutWhenStationary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMercunaObstacleReaction Reaction;
    
    FR5STT_ChangeAvoidance_InstanceData();
};


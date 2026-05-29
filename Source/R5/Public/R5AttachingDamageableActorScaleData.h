#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Int32Interval -FallbackName=Int32Interval
#include "R5AttachingDamageableActorLogicData.h"
#include "R5AttachingDamageableActorScaleData.generated.h"

USTRUCT(BlueprintType)
struct FR5AttachingDamageableActorScaleData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Interval DifficultyInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AttachingDamageableActorLogicData Data;
    
    R5_API FR5AttachingDamageableActorScaleData();
};


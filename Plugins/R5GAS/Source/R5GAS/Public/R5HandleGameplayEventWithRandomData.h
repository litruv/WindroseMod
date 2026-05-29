#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=ScalableFloat -FallbackName=ScalableFloat
#include "ScalableFloat.h"
#include "R5HandleGameplayEventWithRandomData.generated.h"

USTRUCT(BlueprintType)
struct FR5HandleGameplayEventWithRandomData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Random;
    
    R5GAS_API FR5HandleGameplayEventWithRandomData();
};


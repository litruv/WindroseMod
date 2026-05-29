#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectSpecForRPC -FallbackName=GameplayEffectSpecForRPC
#include "GameplayEffect.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=PredictionKey -FallbackName=PredictionKey
#include "GameplayPrediction.h"
#include "R5GameplayCueData_FromSpec.generated.h"

USTRUCT(BlueprintType)
struct FR5GameplayCueData_FromSpec {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayEffectSpecForRPC FromSpec;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPredictionKey PredictionKey;
    
    R5GAS_API FR5GameplayCueData_FromSpec();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayCueParameters -FallbackName=GameplayCueParameters
#include "GameplayEffectTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=PredictionKey -FallbackName=PredictionKey
#include "GameplayPrediction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5GameplayCueData_FromParameters.generated.h"

USTRUCT(BlueprintType)
struct FR5GameplayCueData_FromParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> GameplayCueTags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPredictionKey PredictionKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayCueParameters CueParameters;
    
    R5GAS_API FR5GameplayCueData_FromParameters();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5GameplayEffectWithPredefinedMagnitudesSoftRef.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct R5GAS_API FR5GameplayEffectWithPredefinedMagnitudesSoftRef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGameplayEffect> GameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> SetByCallerTagMagnitudes;
    
    FR5GameplayEffectWithPredefinedMagnitudesSoftRef();
};


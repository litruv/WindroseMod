#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "R5PostureAbilityData.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FR5PostureAbilityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> BlockPostureRegenGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequiredPostureDamageOverflowRatioToOutOfPosture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinOverflowPostureDamageThresholdToOutOfPosture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag OutOfPostureAbilityTag;
    
    R5_API FR5PostureAbilityData();
};


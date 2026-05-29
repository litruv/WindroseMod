#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5AnimatedInteractionTargetComponentParams_MontageData.generated.h"

USTRUCT(BlueprintType)
struct FR5AnimatedInteractionTargetComponentParams_MontageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MontageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProbabilityCoefficient;
    
    R5_API FR5AnimatedInteractionTargetComponentParams_MontageData();
};


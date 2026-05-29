#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
#include "GameplayTagContainer.h"
#include "R5HandleGameplayEventForConsecutiveHitsDamageFilter.generated.h"

USTRUCT(BlueprintType)
struct FR5HandleGameplayEventForConsecutiveHitsDamageFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery DamageTagsQuery;
    
    R5GAS_API FR5HandleGameplayEventForConsecutiveHitsDamageFilter();
};


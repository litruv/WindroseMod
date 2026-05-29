#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5RangeWeaponGetReadyUseAMAbilityTechData.generated.h"

USTRUCT(BlueprintType)
struct FR5RangeWeaponGetReadyUseAMAbilityTechData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RemoveDisableMelee;
    
    R5_API FR5RangeWeaponGetReadyUseAMAbilityTechData();
};


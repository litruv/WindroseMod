#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5RangeWeaponShotActionFXData.h"
#include "R5RangeWeaponShootAbilityFXData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5RangeWeaponShootAbilityFXData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FR5RangeWeaponShotActionFXData> ActionToFXData;
    
    FR5RangeWeaponShootAbilityFXData();
};


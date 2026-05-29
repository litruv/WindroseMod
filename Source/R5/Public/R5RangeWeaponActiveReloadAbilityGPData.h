#pragma once
#include "CoreMinimal.h"
#include "R5RangeWeaponActiveReloadAbilityGPData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5RangeWeaponActiveReloadAbilityGPData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AddAmmoPerReloadCycle;
    
    FR5RangeWeaponActiveReloadAbilityGPData();
};


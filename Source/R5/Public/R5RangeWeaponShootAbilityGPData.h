#pragma once
#include "CoreMinimal.h"
#include "R5RangeWeaponShootAbilityFXDatum.h"
#include "R5RangeWeaponShootAbilityLogicDatum.h"
#include "R5ShotItemData.h"
#include "R5RangeWeaponShootAbilityGPData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5RangeWeaponShootAbilityGPData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5RangeWeaponShootAbilityLogicDatum LogicData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5RangeWeaponShootAbilityFXDatum FXData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ShotItemData ShotData;
    
    FR5RangeWeaponShootAbilityGPData();
};


#pragma once
#include "CoreMinimal.h"
#include "R5RangeWeaponShootAbilityDrawnTagToFXData.h"
#include "R5RangeWeaponShootAbilityFXData.h"
#include "R5RangeWeaponShootAbilityFXDatum.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5RangeWeaponShootAbilityFXDatum {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5RangeWeaponShootAbilityDrawnTagToFXData> DrawnWeaponTagsToFXDatum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5RangeWeaponShootAbilityFXData DefaultFXData;
    
    FR5RangeWeaponShootAbilityFXDatum();
};


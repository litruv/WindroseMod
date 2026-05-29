#pragma once
#include "CoreMinimal.h"
#include "R5RangeWeaponShotAbilityDrawnTagToLogicData.h"
#include "R5RangeWeaponShotAbilityLogicData.h"
#include "R5RangeWeaponShootAbilityLogicDatum.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5RangeWeaponShootAbilityLogicDatum {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5RangeWeaponShotAbilityDrawnTagToLogicData> DrawnWeaponTagsToShotDatum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5RangeWeaponShotAbilityLogicData DefaultShotData;
    
    FR5RangeWeaponShootAbilityLogicDatum();
};


#pragma once
#include "CoreMinimal.h"
#include "R5RangeWeaponShotAbilitySingleFXData.h"
#include "R5RangeWeaponShotActionFXData.generated.h"

USTRUCT(BlueprintType)
struct FR5RangeWeaponShotActionFXData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5RangeWeaponShotAbilitySingleFXData> FXData;
    
    R5_API FR5RangeWeaponShotActionFXData();
};


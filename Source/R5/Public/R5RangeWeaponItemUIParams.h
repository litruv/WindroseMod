#pragma once
#include "CoreMinimal.h"
#include "R5EquipmentItemUIParams.h"
#include "R5RangeWeaponItemUIData.h"
#include "R5RangeWeaponItemUIParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5RangeWeaponItemUIParams : public UR5EquipmentItemUIParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5RangeWeaponItemUIData Data;
    
    UR5RangeWeaponItemUIParams();

};


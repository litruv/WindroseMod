#pragma once
#include "CoreMinimal.h"
#include "R5EquipmentItemVisualParams.h"
#include "R5RangeWeaponItemVisualData.h"
#include "R5RangeWeaponItemVisualParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5RangeWeaponItemVisualParams : public UR5EquipmentItemVisualParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5RangeWeaponItemVisualData> VisualData;
    
    UR5RangeWeaponItemVisualParams();

};


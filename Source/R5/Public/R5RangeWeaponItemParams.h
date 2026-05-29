#pragma once
#include "CoreMinimal.h"
#include "R5EquipmentItemParams.h"
#include "R5RangeWeaponItemParams.generated.h"

class UR5RangeWeaponItemLogicParams;
class UR5RangeWeaponItemSoundParams;
class UR5RangeWeaponItemUIParams;
class UR5RangeWeaponItemVisualParams;

UCLASS(Blueprintable)
class R5_API UR5RangeWeaponItemParams : public UR5EquipmentItemParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5RangeWeaponItemLogicParams* LogicParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5RangeWeaponItemVisualParams* VisualParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5RangeWeaponItemSoundParams* SoundParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5RangeWeaponItemUIParams* UIParams;
    
    UR5RangeWeaponItemParams();

};


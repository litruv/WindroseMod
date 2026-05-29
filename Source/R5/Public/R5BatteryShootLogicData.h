#pragma once
#include "CoreMinimal.h"
#include "R5BatteryShootLogicData.generated.h"

class UR5RangeWeapon_LauncherParams_Base;

USTRUCT(BlueprintType)
struct FR5BatteryShootLogicData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5RangeWeapon_LauncherParams_Base* LauncherParams;
    
    R5_API FR5BatteryShootLogicData();
};


#pragma once
#include "CoreMinimal.h"
#include "R5RangeWeapon_LauncherParams_Base.h"
#include "R5ShipBattery_LauncherParam_SimpleProjectileData.h"
#include "R5ShipBattery_LauncherParam_SimpleProjectile.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class R5_API UR5ShipBattery_LauncherParam_SimpleProjectile : public UR5RangeWeapon_LauncherParams_Base {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ShipBattery_LauncherParam_SimpleProjectileData Data;
    
public:
    UR5ShipBattery_LauncherParam_SimpleProjectile();

};


#pragma once
#include "CoreMinimal.h"
#include "R5RangeWeaponScatterData.h"
#include "R5RangeWeaponShotAbilityLogicData.generated.h"

class UR5RangeWeapon_LauncherParams_Base;
class UR5RecoilTaskParams_Base;

USTRUCT(BlueprintType)
struct R5_API FR5RangeWeaponShotAbilityLogicData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5RangeWeapon_LauncherParams_Base* LauncherParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5RecoilTaskParams_Base* RecoilParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5RangeWeaponScatterData> Scatters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShotsPerLaunch;
    
    FR5RangeWeaponShotAbilityLogicData();
};


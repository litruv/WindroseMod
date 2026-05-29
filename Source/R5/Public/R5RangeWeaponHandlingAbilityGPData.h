#pragma once
#include "CoreMinimal.h"
#include "R5RangeWeaponHandlingAbilityGPData.generated.h"

class UR5DrawWeaponTaskBase;
class UR5GetReadyFinishedTaskBase;

USTRUCT(BlueprintType)
struct R5_API FR5RangeWeaponHandlingAbilityGPData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5DrawWeaponTaskBase* DrawWeaponTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5GetReadyFinishedTaskBase* GetReadyFinishedTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldRetakeWeaponAfterShot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInstantRetake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRetakeOnlyWhenHaveLoadedWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRelaunchReadyToShootTimerAfterShot;
    
    FR5RangeWeaponHandlingAbilityGPData();
};


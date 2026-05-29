#pragma once
#include "CoreMinimal.h"
#include "R5RangeWeaponShotAbility.h"
#include "R5RangeWeaponMultiShotAbility.generated.h"

class UR5RangeWeaponMultiShotAbilityTechParams;

UCLASS(Blueprintable)
class R5_API UR5RangeWeaponMultiShotAbility : public UR5RangeWeaponShotAbility {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5RangeWeaponMultiShotAbilityTechParams* MultiShotTechParams;
    
public:
    UR5RangeWeaponMultiShotAbility();

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerNextShotRequest();
    
};


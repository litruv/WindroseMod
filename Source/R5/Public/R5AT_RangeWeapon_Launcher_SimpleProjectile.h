#pragma once
#include "CoreMinimal.h"
#include "R5AT_RangeWeapon_Launcher_Base.h"
#include "Templates/SubclassOf.h"
#include "R5AT_RangeWeapon_Launcher_SimpleProjectile.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class R5_API UR5AT_RangeWeapon_Launcher_SimpleProjectile : public UR5AT_RangeWeapon_Launcher_Base {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> DamageGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> ImpactGE;
    
public:
    UR5AT_RangeWeapon_Launcher_SimpleProjectile();

};


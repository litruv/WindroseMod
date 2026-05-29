#pragma once
#include "CoreMinimal.h"
#include "R5RangeWeaponAmmoUpdate.generated.h"

USTRUCT(BlueprintType)
struct FR5RangeWeaponAmmoUpdate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NewAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OldAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAmmo;
    
    R5_API FR5RangeWeaponAmmoUpdate();
};


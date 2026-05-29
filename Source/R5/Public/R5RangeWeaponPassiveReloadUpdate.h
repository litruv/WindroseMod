#pragma once
#include "CoreMinimal.h"
#include "R5RangeWeaponPassiveReloadUpdate.generated.h"

USTRUCT(BlueprintType)
struct FR5RangeWeaponPassiveReloadUpdate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NewRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OldRatio;
    
    R5_API FR5RangeWeaponPassiveReloadUpdate();
};


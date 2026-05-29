#pragma once
#include "CoreMinimal.h"
#include "R5RangeWeaponScatterDataBase.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FR5RangeWeaponScatterDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ScatterCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxScatter_PlayerAiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxScatter_TargetLock;
    
    R5_API FR5RangeWeaponScatterDataBase();
};


#pragma once
#include "CoreMinimal.h"
#include "R5ShipCollisionDamageData.generated.h"

class UCurveFloat;
class UR5DamageGEParams;

USTRUCT(BlueprintType)
struct FR5ShipCollisionDamageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSpeedDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpulseToDamageCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DamageCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5DamageGEParams* HitDamageParams;
    
    R5_API FR5ShipCollisionDamageData();
};


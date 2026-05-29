#pragma once
#include "CoreMinimal.h"
#include "R5AccumulatedMovementInterface.h"
#include "R5BallisticProjectileDamageCoefficients.h"
#include "R5BaseProjectile.h"
#include "RotationSpeedRanges.h"
#include "R5BallisticProjectile.generated.h"

class UR5ProjectileCosmeticComponent;
class UR5ProjectileDamageApplyComponent;
class UR5ProjectileSurfaceEffectParams;

UCLASS(Blueprintable, NoExport)
class R5_API AR5BallisticProjectile : public AR5BaseProjectile, public IR5AccumulatedMovementInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ProjectileDamageApplyComponent* DamageApplyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ProjectileCosmeticComponent* CosmeticComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ProjectileSurfaceEffectParams* ProjectileSurfaceEffectsParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BallisticProjectileDamageCoefficients DamageCoefficients;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotationSpeedRanges RotationSpeedRanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocationInterpolationSpeed;
    
public:
    AR5BallisticProjectile(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};


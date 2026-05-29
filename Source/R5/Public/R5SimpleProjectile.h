#pragma once
#include "CoreMinimal.h"
#include "R5BaseProjectile.h"
#include "R5SimpleProjectile.generated.h"

class UR5ProjectileCosmeticComponent;
class UR5ProjectileDamageApplyComponent;
class UR5ProjectileSurfaceEffectParams;

UCLASS(Blueprintable, NoExport)
class R5_API AR5SimpleProjectile : public AR5BaseProjectile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ProjectileDamageApplyComponent* DamageApplyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ProjectileCosmeticComponent* CosmeticComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ProjectileSurfaceEffectParams* ProjectileSurfaceEffectsParams;
    
public:
    AR5SimpleProjectile(const FObjectInitializer& ObjectInitializer);

};


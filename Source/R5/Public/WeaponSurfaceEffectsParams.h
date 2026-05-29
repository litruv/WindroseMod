#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "ER5BlockSurfaceMaterialType.h"
#include "R5PawnHitEffectData.h"
#include "R5SurfaceEffectData.h"
#include "R5WeaponSurfaceEffectData.h"
#include "WeaponSurfaceEffectsParams.generated.h"

UCLASS(Blueprintable)
class UWeaponSurfaceEffectsParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPhysicalSurface>, FR5WeaponSurfaceEffectData> HitEffectsForEnvironment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPhysicalSurface>, FR5PawnHitEffectData> HitEffectsForPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ER5BlockSurfaceMaterialType, FR5SurfaceEffectData> BlockEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ER5BlockSurfaceMaterialType, FR5SurfaceEffectData> PerfectBlockEffects;
    
    UWeaponSurfaceEffectsParams();

    UFUNCTION(BlueprintCallable)
    FR5PawnHitEffectData GetPawnEffectDataForHit(const FHitResult& HitResult);
    
};


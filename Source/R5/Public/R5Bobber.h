#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=R5MockDataCache -ObjectName=R5InventoryItem -FallbackName=R5InventoryItem
#include "R5InventoryItem.h"
#include "R5BaseProjectile.h"
#include "R5Bobber.generated.h"

class UR5BobberCosmeticComponent;
class UR5BobberMovementComponent;
class UR5BobberParams;
class UR5ProjectileSurfaceEffectParams;
class USkeletalMeshComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5Bobber : public AR5BaseProjectile {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ProjectileSurfaceEffectParams* ProjectileSurfaceEffectsParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BobberParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5BobberCosmeticComponent* CosmeticComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5BobberMovementComponent* MovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CatchItem, meta=(AllowPrivateAccess=true))
    FR5InventoryItem CatchItem;
    
public:
    AR5Bobber(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CatchItem();
    
    UFUNCTION(BlueprintCallable)
    void OnMovementStop(const FHitResult& ImpactResult);
    
};


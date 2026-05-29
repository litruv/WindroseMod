#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CommonUtils -ObjectName=R5AsyncDeferredAsset -FallbackName=R5AsyncDeferredAsset
#include "R5AsyncDeferredAsset.h"
#include "R5ComfortSourceInterface.h"
#include "R5GameplayEffectProxyInterface.h"
#include "R5BuildingBlock.generated.h"

class UMaterialInterface;
class UR5BuildingGameplayEffectProxyComponent;
class UR5BuildingItem;
class UR5ExplosionReactionComponent;
class UR5FoliageMeshComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5BuildingBlock : public AActor, public IR5ComfortSourceInterface, public IR5GameplayEffectProxyInterface, public IR5AsyncDeferredAsset {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5FoliageMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5BuildingGameplayEffectProxyComponent* GameplayEffectProxyComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 BuildingGraphNodeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BuildingItem, meta=(AllowPrivateAccess=true))
    UR5BuildingItem* BuildingItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CurrentMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ExplosionReactionComponent* ExplosionReactionComponent;
    
public:
    AR5BuildingBlock(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_BuildingItem();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDecayable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDamageable() const;
    

    // Fix for true pure virtual functions not being implemented
};


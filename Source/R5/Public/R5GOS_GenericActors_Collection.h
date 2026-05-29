#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagAssetInterface -FallbackName=GameplayTagAssetInterface
#include "GameplayTagAssetInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "R5GameplayEffectProxyInterface.h"
#include "R5Requirement_ResourceTool.h"
#include "R5GOS_GenericActors_Collection.generated.h"

class UPhysicalMaterial;
class UPrimitiveComponent;
class UR5DamageableFoliageParams;
class UR5ExplosionReactionComponent;
class UR5ExplosiveReactionData;
class UR5GOS_GenericActors_GameplayEffectProxyComponent;
class UR5GOS_GenericActors_InteractionTargetComponent;
class UR5ISMComponent;
class UR5InstancedBoxCollisionComponent;
class UR5NoASCDamageableParams;
class UR5PickupResourceParams;
class UStaticMesh;

UCLASS(Blueprintable, NoExport)
class AR5GOS_GenericActors_Collection : public AActor, public IR5GameplayEffectProxyInterface, public IR5Requirement_ResourceTool, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
    virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5DamageableFoliageParams* FoliageParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ExplosiveReactionData* ExplosionReactionParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5PickupResourceParams* PickupParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* MeshComponentInfo_StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* CollisionInfo_PhysicalMaterialOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5NoASCDamageableParams* DamageableParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ISMComponent* PhysicalISM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5GOS_GenericActors_GameplayEffectProxyComponent* GameplayEffectProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ExplosionReactionComponent* ExplosionReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5GOS_GenericActors_InteractionTargetComponent* InteractionTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5InstancedBoxCollisionComponent* InteractionCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5InstancedBoxCollisionComponent* GameplayEffectCollision;
    
public:
    AR5GOS_GenericActors_Collection(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OverlapStopped(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OverlapStarted(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
protected:
    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer BP_GetOwnedGameplayTags() const override PURE_VIRTUAL(BP_GetOwnedGameplayTags, return FGameplayTagContainer{};);
    
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagAssetInterface -FallbackName=GameplayTagAssetInterface
#include "GameplayTagAssetInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "R5GameplayEffectProxyInterface.h"
#include "R5GenerativeActor.h"
#include "R5NetworkSpawnControl.h"
#include "R5Requirement_ResourceTool.h"
#include "R5RequiresBLRecordId.h"
#include "R5DigVolume.generated.h"

class UInstancedStaticMeshComponent;
class UMaterialInterface;
class UR5BLActor_DigVolumeView;
class UR5CommonInteractionTargetComponent;
class UR5DigVolumeConfig;
class UR5DigVolumeGameplayEffectProxyComponent;
class UR5ExplosionReactionComponent;
class UR5NavInstancedStaticMeshComponent;
class UStaticMesh;

UCLASS(Blueprintable, DefaultConfig, NoExport, Config=Game)
class R5_API AR5DigVolume : public AActor, public IR5RequiresBLRecordId, public IR5GameplayEffectProxyInterface, public IR5Requirement_ResourceTool, public IR5GenerativeActor, public IR5NetworkSpawnControl, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
    virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5DigVolumeConfig* VolumeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> VolumeShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VolumeShapeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateNav;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NumCells;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InfoNumInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DebugStaticMeshMaterial;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CommonInteractionTargetComponent* InteractTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ExplosionReactionComponent* ExplosionReactionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5DigVolumeGameplayEffectProxyComponent* GEProxy;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5BLActor_DigVolumeView* DigVolumeView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5NavInstancedStaticMeshComponent* NavMeshesComponent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> NavStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UInstancedStaticMeshComponent*> InstancedMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UInstancedStaticMeshComponent*> InstancedBodies;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxIterationsForFillVolume;
    
public:
    AR5DigVolume(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
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


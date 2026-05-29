#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Int32Interval -FallbackName=Int32Interval
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagAssetInterface -FallbackName=GameplayTagAssetInterface
#include "GameplayTagAssetInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "ChoppingSegment.h"
#include "R5ResourceNode.h"
#include "R5SegmentTreeSpec.h"
#include "R5SegmentTree.generated.h"

class AActor;
class UDecalComponent;
class UPrimitiveComponent;
class UR5FoliageMeshComponent;
class UR5FoliageSoundComponent;
class UR5SegmentTreeCollision;
class UR5SegmentTreeData;
class UStaticMeshComponent;

UCLASS(Blueprintable, NoExport, Config=Engine)
class R5_API AR5SegmentTree : public AR5ResourceNode, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
    virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override;
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5SegmentTreeData* Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5FoliageMeshComponent* Leaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5SegmentTreeCollision* Collision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5FoliageSoundComponent* FoliageSoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChoppingSegment> ChoppingSegments;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NetCullDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BreakingPointSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> Segments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FR5SegmentTreeSpec Spec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OnTreeFalling, meta=(AllowPrivateAccess=true))
    bool bTreeChopped;
    
public:
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_ActiveSegmentInterval, meta=(AllowPrivateAccess=true))
    FInt32Interval ActiveSegmentInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDecalComponent*> Decals;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<AActor>, double> LastTimeActorWasDamaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HideFruit, meta=(AllowPrivateAccess=true))
    bool bCollectLootDropped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ChoppingSegmentsTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LeavesTag;
    
public:
    AR5SegmentTree(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_OnTreeFalling();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HideFruit();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveSegmentInterval();
    
    UFUNCTION(BlueprintCallable)
    void OnComponentWake(UPrimitiveComponent* WakingComponent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentSleep(UPrimitiveComponent* SleepingComponent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticastPlayDestructionEffects();
    
    UFUNCTION(BlueprintCallable)
    void DetectGroundAndApplyVisual();
    
    UFUNCTION(BlueprintCallable)
    void DetectCollision();
    

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


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagAssetInterface -FallbackName=GameplayTagAssetInterface
#include "GameplayTagAssetInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GameplayOrchestrator -ObjectName=R5InstantiableActor -FallbackName=R5InstantiableActor
#include "R5InstantiableActor.h"
#include "R5ExternalShapesProviderInterface.h"
#include "R5GameplayEffectProxyInterface.h"
#include "R5Requirement_ResourceTool.h"
#include "R5DamageableFoliageActor.generated.h"

class UNiagaraComponent;
class UR5CommonInteractionTargetComponent;
class UR5DamageableFoliageParams;
class UR5ExplosionReactionComponent;
class UR5FoliageMeshComponent;
class UR5ScenarioEventComponent;
class UR5SimpleFoliageGameplayEffectProxyComponent;

UCLASS(Blueprintable, NoExport, Config=Engine)
class R5_API AR5DamageableFoliageActor : public AR5InstantiableActor, public IGameplayTagAssetInterface, public IR5GameplayEffectProxyInterface, public IR5ExternalShapesProviderInterface, public IR5Requirement_ResourceTool {
    GENERATED_BODY()
public:
    virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override;
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5SimpleFoliageGameplayEffectProxyComponent* GameplayEffectProxyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ExplosionReactionComponent* ExplosiveReactionComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NetCullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5FoliageMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5DamageableFoliageParams* FoliageItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CommonInteractionTargetComponent* InteractTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ScenarioEventComponent* ScenarioEventComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* CalmEffectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OnHealthAlpha, meta=(AllowPrivateAccess=true))
    float HealthAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LootDropped, meta=(AllowPrivateAccess=true))
    bool bLootDropped;
    
public:
    AR5DamageableFoliageActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PlayFXOnLootDrop();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OnHealthAlpha();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LootDropped();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer BP_GetOwnedGameplayTags() const override PURE_VIRTUAL(BP_GetOwnedGameplayTags, return FGameplayTagContainer{};);
    
};


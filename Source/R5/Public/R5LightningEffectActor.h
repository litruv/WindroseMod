#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "R5LightningEffectActor.generated.h"

class UNiagaraComponent;
class UPointLightComponent;
class UR5EquipmentItem;
class UR5LightingAbilityParams;
class USceneComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5LightningEffectActor : public AActor {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=OnRep_Item, meta=(AllowPrivateAccess=true))
    UR5EquipmentItem* EquipmentItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UR5LightingAbilityParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> SpawnedFXComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPointLightComponent* LightComponent;
    
public:
    AR5LightningEffectActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Item();
    
    UFUNCTION(BlueprintCallable)
    void OnEquipmentSceneComponentInitialized();
    
};


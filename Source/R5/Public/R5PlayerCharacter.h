#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5EntityProgression -ObjectName=R5EntityProgressionInterface -FallbackName=R5EntityProgressionInterface
#include "R5EntityProgressionInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Inventory -ObjectName=R5DropItemInterface -FallbackName=R5DropItemInterface
#include "R5DropItemInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Inventory -ObjectName=R5InventoryInterface -FallbackName=R5InventoryInterface
#include "R5InventoryInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Inventory -ObjectName=R5PersonalInventoriesInterface -FallbackName=R5PersonalInventoriesInterface
#include "R5PersonalInventoriesInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Inventory -ObjectName=R5PlayerMetadataInterface -FallbackName=R5PlayerMetadataInterface
#include "R5PlayerMetadataInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioInterface -FallbackName=R5ScenarioInterface
#include "R5ScenarioInterface.h"
#include "ER5InputMode.h"
#include "R5AmmoComponentInterface.h"
#include "R5BLEntityInterface.h"
#include "R5Character.h"
#include "R5CombatComponentInterface.h"
#include "R5EquipmentComponentInterface.h"
#include "R5PlayerDialogueInterface.h"
#include "R5PlayerCharacter.generated.h"

class AR5PlayerCharacter;
class AR5PlayerState;
class UInputMappingContext;
class UObject;
class UR5AmmoComponent;
class UR5BLInventoryView;
class UR5ClosedAreaSoundModifierComponent;
class UR5CombatComponent;
class UR5DamageableFoliageTouchSoundInvoker;
class UR5DefaultEquipment;
class UR5DropItemsComponent;
class UR5EquipmentComponent;
class UR5GOS_GenericActors_TouchInvoker;
class UR5PickupVisualComponent;
class UR5PlayerEquipment;
class UR5ProximityActorComponent;
class UR5TaggedVolumeInvokerComponent;
class UR5TaggedVolumesTrackerComponent;
class USceneComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5PlayerCharacter : public AR5Character, public IR5AmmoComponentInterface, public IR5EquipmentComponentInterface, public IR5InventoryInterface, public IR5DropItemInterface, public IR5CombatComponentInterface, public IR5ScenarioInterface, public IR5PlayerDialogueInterface, public IR5PersonalInventoriesInterface, public IR5EntityProgressionInterface, public IR5BLEntityInterface, public IR5PlayerMetadataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CombatComponent* CombatComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5TaggedVolumeInvokerComponent* TaggedVolumeInvokerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5TaggedVolumesTrackerComponent* TaggedVolumesTrackerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ClosedAreaSoundModifierComponent* ClosedAreaSoundModifierComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ProximityActorComponent* ProximityActorComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AR5PlayerState* LastPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnAsBot;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5PickupVisualComponent* AutoPickerItemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputMappingContext* DefaultMappingContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5DefaultEquipment* DefaultEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ItemSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RenderPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5DropItemsComponent* DropItemsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5DamageableFoliageTouchSoundInvoker* DamageableFoliageTouchSoundInvoker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5GOS_GenericActors_TouchInvoker* GenericActors_TouchInvoker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5PlayerEquipment* Equipment;
    
public:
    AR5PlayerCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void InputModeChanged(ER5InputMode Mode);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AR5PlayerCharacter* GetR5CharacterForLocalPlayer(const UObject* Wco);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5BLInventoryView* GetInventoryView() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5EquipmentComponent* GetEquipmentComponent_Implementation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5DefaultEquipment* GetDefaultEquipment_Implementation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5AmmoComponent* GetAmmoComponent() const;
    

    // Fix for true pure virtual functions not being implemented
};


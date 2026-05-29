#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "UObject/SoftObjectPath.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilitySystemInterface -FallbackName=AbilitySystemInterface
#include "AbilitySystemInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagAssetInterface -FallbackName=GameplayTagAssetInterface
#include "GameplayTagAssetInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
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
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Relationship -ObjectName=R5PartyComponentInterface -FallbackName=R5PartyComponentInterface
#include "R5PartyComponentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioEventComponentInterface -FallbackName=R5ScenarioEventComponentInterface
#include "R5ScenarioEventComponentInterface.h"
#include "R5AmmoComponentInterface.h"
#include "R5BLEntityInterface.h"
#include "R5BoardingParticipantInterface.h"
#include "R5CharacterCustomizationComponentInterface.h"
#include "R5CharacterFsmComponentInterface.h"
#include "R5EquipmentComponentInterface.h"
#include "R5PlayerDialogueInterface.h"
#include "R5PlayerStateBase.h"
#include "R5ProximityStorageInterface.h"
#include "R5ReviveComponentInterface.h"
#include "R5ShipOwnerInterface.h"
#include "R5PlayerState.generated.h"

class APawn;
class APlayerState;
class AR5PlayerState;
class UObject;
class UR5AbilitySystemComponent;
class UR5AmmoComponent;
class UR5AttributeSet;
class UR5AttributeSet_RangeWeapon;
class UR5BLInventoryView;
class UR5BLQuestsParamsView;
class UR5BoardingParticipantComponent;
class UR5CharacterCustomizationComponent;
class UR5CharacterFsmComponent;
class UR5EquipmentComponent;
class UR5MapControllerComponent;
class UR5MarkersSystemComponent;
class UR5PartyComponent;
class UR5PlayerDialogueComponent;
class UR5PostureAttributeSet;
class UR5ProgressionComponent;
class UR5ProximityStorageComponent;
class UR5ReviveComponent;
class UR5ScenarioEventComponent;
class UR5ShipownerComponent;
class UR5UnstuckComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5PlayerState : public AR5PlayerStateBase, public IAbilitySystemInterface, public IGameplayTagAssetInterface, public IR5EquipmentComponentInterface, public IR5ReviveComponentInterface, public IR5AmmoComponentInterface, public IR5CharacterCustomizationComponentInterface, public IR5CharacterFsmComponentInterface, public IR5PartyComponentInterface, public IR5ProximityStorageInterface, public IR5InventoryInterface, public IR5PlayerDialogueInterface, public IR5ShipOwnerInterface, public IR5PersonalInventoriesInterface, public IR5BoardingParticipantInterface, public IR5ScenarioEventComponentInterface, public IR5EntityProgressionInterface, public IR5BLEntityInterface, public IR5DropItemInterface, public IR5PlayerMetadataInterface {
    GENERATED_BODY()
public:
    virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override;
public:
    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5CharacterFsmComponent* R5CharacterFsmComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5AbilitySystemComponent* R5AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5AttributeSet* R5AttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5PostureAttributeSet* PostureAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5AttributeSet_RangeWeapon* RangeWeaponAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ShipownerComponent* ShipownerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5AmmoComponent* AmmoComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5MarkersSystemComponent* MarkersSystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CharacterCustomizationComponent* CharacterCustomizationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5PartyComponent* PartyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ReviveComponent* R5ReviveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ProximityStorageComponent* ProximityStorageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5MapControllerComponent* MapController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5PlayerDialogueComponent* DialogueComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5UnstuckComponent* UnstuckComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5BoardingParticipantComponent* BoardingParticipantComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLQuestsParamsView* QuestsParamsView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ScenarioEventComponent* ScenarioEventComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ProgressionComponent* ProgressionComponent;
    
public:
    AR5PlayerState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ThrowReceivingItemsNotification(const FSoftObjectPath& ObjectPath, int32 Delta, int32 Amount, bool bMarkAsReward, FGameplayTag TargetInventoryTag, FGameplayTag TargetInventoryModuleTag);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ThrowCustomReceivingItemsNotification(const TArray<FSoftObjectPath>& ItemsPaths, const TArray<int32>& ItemsCount, const FSoftObjectPath& NotificationsList, FGameplayTag NotificationKey);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPreDisconnectFromServer() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPawnSetCallback(APlayerState* Player, APawn* NewPawn, APawn* OldPawn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5UnstuckComponent* GetUnstuckComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5ShipownerComponent* GetShipownerComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5ReviveComponent* GetReviveComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AR5PlayerState* GetR5PlayerStateForLocalPlayer(const UObject* Wco);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5MapControllerComponent* GetMapController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5BLInventoryView* GetInventoryView() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5EquipmentComponent* GetEquipmentComponent_Implementation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5AmmoComponent* GetAmmoComponent() const;
    

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


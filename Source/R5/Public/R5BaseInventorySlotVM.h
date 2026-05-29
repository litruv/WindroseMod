#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMListEntityVM -FallbackName=R5MVVMListEntityVM
#include "R5MVVMListEntityVM.h"
#include "ER5InventorySlotClickType.h"
#include "ER5KeyModifier.h"
#include "R5BaseInventorySlotVM.generated.h"

class UInputAction;
class UR5BLInventoryItem;
class UR5BLInventorySlotView;
class UR5MVVMObserver_GameplayEffects;
class UTexture2D;

UCLASS(Blueprintable)
class R5_API UR5BaseInventorySlotVM : public UR5MVVMListEntityVM {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FR5OnSlotInputActionReceived);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnSlotInputActionReceived OnInputActionPressedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnSlotInputActionReceived OnInputActionReleasedEvent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLInventorySlotView* SlotView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMObserver_GameplayEffects* SlotStatusEffectsObserver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* InputAction;
    
public:
    UR5BaseInventorySlotVM();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPersonalSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquipped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquipmentSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCooldownAble() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConsumableItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCooldown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetSlotType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSlotLimit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UR5BLInventoryItem> GetSlotItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetSlotIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxAttributeCount(FGameplayTag AttributeTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemsCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetItemName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetItemIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInputAction* GetInputAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetFirstAttributeTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCooldownInfo(float& CooldownTime, float& CurrentProgress) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetContainedItemTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAttributeCount(FGameplayTag AttributeTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsEquipmentItem() const;
    
    UFUNCTION(BlueprintCallable)
    void ClickByInventorySlot(ER5InventorySlotClickType ClickType, ER5KeyModifier ClickModifier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseItem() const;
    
};


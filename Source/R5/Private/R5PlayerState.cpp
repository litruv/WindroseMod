#include "R5PlayerState.h"

void AR5PlayerState::StaticRegisterNativesAR5PlayerState()
{
}


void AR5PlayerState::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const
{
    TagContainer = BP_GetOwnedGameplayTags();
}

UAbilitySystemComponent* AR5PlayerState::GetAbilitySystemComponent() const
{
    return nullptr;
}

AR5PlayerState::AR5PlayerState(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}




void AR5PlayerState::OnPawnSetCallback(APlayerState* Player, APawn* NewPawn, APawn* OldPawn)
{
}

void AR5PlayerState::OnPreDisconnectFromServer() const
{
}

UR5UnstuckComponent* AR5PlayerState::GetUnstuckComponent() const
{
    return nullptr;
}

AR5PlayerState* AR5PlayerState::GetR5PlayerStateForLocalPlayer(const UObject* Wco)
{
    return nullptr;
}

UR5ShipownerComponent* AR5PlayerState::GetShipownerComponent() const
{
    return nullptr;
}

UR5ReviveComponent* AR5PlayerState::GetReviveComponent() const
{
    return nullptr;
}

UR5AmmoComponent* AR5PlayerState::GetAmmoComponent() const
{
    return nullptr;
}

UR5BLInventoryView* AR5PlayerState::GetInventoryView() const
{
    return nullptr;
}

UR5MapControllerComponent* AR5PlayerState::GetMapController() const
{
    return nullptr;
}

UR5EquipmentComponent* AR5PlayerState::GetEquipmentComponent_Implementation() const
{
    return nullptr;
}

void AR5PlayerState::ThrowCustomReceivingItemsNotification_Implementation(const TArray<FSoftObjectPath>& ItemsPaths, const TArray<int32>& ItemsCount, const FSoftObjectPath& NotificationsList, FGameplayTag NotificationKey)
{
}

void AR5PlayerState::ThrowReceivingItemsNotification_Implementation(const FSoftObjectPath& ObjectPath, int32 Delta, int32 Amount, bool bMarkAsReward, FGameplayTag TargetInventoryTag, FGameplayTag TargetInventoryModuleTag)
{
}

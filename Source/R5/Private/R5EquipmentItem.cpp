#include "R5EquipmentItem.h"

void UR5EquipmentItem::OnGameplayEffectRemoved(const FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo)
{
}

void UR5EquipmentItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

UR5EquipmentItem::UR5EquipmentItem(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

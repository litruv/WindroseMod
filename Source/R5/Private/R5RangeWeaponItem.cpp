#include "R5RangeWeaponItem.h"




UR5RangeWeaponItem::UR5RangeWeaponItem(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UR5RangeWeaponItem::OnRep_MaxClipAmmo(int32 OldMaxClipAmmo)
{
}

UR5RangeWeaponItemUI* UR5RangeWeaponItem::GetRangeWeaponItemUI() const
{
    return nullptr;
}

void UR5RangeWeaponItem::OnRep_ClipAmmo(int32 OldClipAmmo)
{
}

void UR5RangeWeaponItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

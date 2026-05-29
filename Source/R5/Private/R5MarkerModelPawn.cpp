#include "R5MarkerModelPawn.h"

bool UR5MarkerModelPawn::IsPartyMember()
{
    return false;
}

void UR5MarkerModelPawn::OnOwnershipChanged(const FR5BLRecordId& NewOwnerId)
{
}

void UR5MarkerModelPawn::ListenForChangeAttributes(TArray<FGameplayAttribute> Attributes, FOnAttributeChanged Delegate)
{
}

bool UR5MarkerModelPawn::IsOwned() const
{
    return false;
}

UR5AttributeSet* UR5MarkerModelPawn::GetAttributeSet() const
{
    return nullptr;
}

TSoftObjectPtr<UTexture2D> UR5MarkerModelPawn::GetIcon() const
{
    return {};
}

void UR5MarkerModelPawn::OnDeathSpectatorStarted(UR5DeathParams* DeathParams)
{
}

void UR5MarkerModelPawn::OnPartyChangedEventHandle(int32 NewPartyId)
{
}

UR5PostureAttributeSet* UR5MarkerModelPawn::GetPostureAttributeSet() const
{
    return nullptr;
}

UR5MarkerModelPawn::UR5MarkerModelPawn()
{
}

#include "R5MarkerModelPlayerInfo.h"

void UR5MarkerModelPlayerInfo::NickNameChanged(const FString& NickNameName)
{
}

TSoftObjectPtr<UTexture2D> UR5MarkerModelPlayerInfo::GetIcon() const
{
    return {};
}

void UR5MarkerModelPlayerInfo::OnRep_PlayerState()
{
}

void UR5MarkerModelPlayerInfo::OnRep_NickName()
{
}

bool UR5MarkerModelPlayerInfo::IsLocallyControlled() const
{
    return false;
}

UR5MarkerModelPlayerInfo::UR5MarkerModelPlayerInfo()
{
}

void UR5MarkerModelPlayerInfo::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

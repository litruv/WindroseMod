#include "R5MarkerModelQuest.h"

bool UR5MarkerModelQuest::IsPinned() const
{
    return false;
}

UR5MarkerModelQuest::UR5MarkerModelQuest()
{
}

void UR5MarkerModelQuest::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

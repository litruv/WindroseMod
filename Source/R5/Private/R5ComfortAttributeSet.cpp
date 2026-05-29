#include "R5ComfortAttributeSet.h"

void UR5ComfortAttributeSet::OnRep_MaxComfort(const FGameplayAttributeData& OldMaxComfort)
{
}

void UR5ComfortAttributeSet::OnRep_Comfort(const FGameplayAttributeData& OldComfort)
{
}

UR5ComfortAttributeSet::UR5ComfortAttributeSet()
{
}

void UR5ComfortAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

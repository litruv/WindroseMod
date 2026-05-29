#include "R5DigVolume.h"

void AR5DigVolume::StaticRegisterNativesAR5DigVolume()
{
}


void AR5DigVolume::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const
{
    TagContainer = BP_GetOwnedGameplayTags();
}

AR5DigVolume::AR5DigVolume(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}



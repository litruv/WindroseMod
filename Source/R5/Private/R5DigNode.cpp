#include "R5DigNode.h"

void AR5DigNode::StaticRegisterNativesAR5DigNode()
{
}


void AR5DigNode::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const
{
    TagContainer = BP_GetOwnedGameplayTags();
}

void AR5DigNode::OnRep_Level(int32 OldLevelValue)
{
}

AR5DigNode::AR5DigNode(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void AR5DigNode::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

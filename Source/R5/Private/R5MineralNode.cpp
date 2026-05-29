#include "R5MineralNode.h"

void AR5MineralNode::StaticRegisterNativesAR5MineralNode()
{
}


void AR5MineralNode::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const
{
    TagContainer = BP_GetOwnedGameplayTags();
}

AR5MineralNode::AR5MineralNode(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void AR5MineralNode::PlayFXOnDestruction_Implementation(UR5MineralNodeClusterComponent* ClusterComp)
{
}

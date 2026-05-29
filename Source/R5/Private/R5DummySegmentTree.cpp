#include "R5DummySegmentTree.h"

void AR5DummySegmentTree::StaticRegisterNativesAR5DummySegmentTree()
{
}


void AR5DummySegmentTree::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const
{
    TagContainer = BP_GetOwnedGameplayTags();
}

AR5DummySegmentTree::AR5DummySegmentTree(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}


#include "R5AnimationInteractionCollector.h"

UR5AnimationInteractionCollector::UR5AnimationInteractionCollector(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

TArray<TScriptInterface<IR5AnimatedInteractionInterface>> UR5AnimationInteractionCollector::GetInteractionsByType(FGameplayTag InteractionTypeTag, bool bShouldBeFree) const
{
    return {};
}

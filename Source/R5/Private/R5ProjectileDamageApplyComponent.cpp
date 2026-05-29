#include "R5ProjectileDamageApplyComponent.h"

UR5ProjectileDamageApplyComponent::UR5ProjectileDamageApplyComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UR5ProjectileDamageApplyComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void UR5ProjectileDamageApplyComponent::DrawHitMark_Implementation(const FHitResult& HitResult, bool bCriticalHit, const APawn* Instigator) const
{
}

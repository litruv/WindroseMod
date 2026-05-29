#include "R5SegmentTree.h"

void AR5SegmentTree::StaticRegisterNativesAR5SegmentTree()
{
}


void AR5SegmentTree::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const
{
    TagContainer = BP_GetOwnedGameplayTags();
}

void AR5SegmentTree::OnComponentWake(UPrimitiveComponent* WakingComponent, FName BoneName)
{
}

void AR5SegmentTree::OnRep_HideFruit()
{
}

void AR5SegmentTree::OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
}

void AR5SegmentTree::DetectGroundAndApplyVisual()
{
}

void AR5SegmentTree::OnComponentSleep(UPrimitiveComponent* SleepingComponent, FName BoneName)
{
}

void AR5SegmentTree::OnRep_ActiveSegmentInterval()
{
}

void AR5SegmentTree::DetectCollision()
{
}

void AR5SegmentTree::OnRep_OnTreeFalling()
{
}

AR5SegmentTree::AR5SegmentTree(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void AR5SegmentTree::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void AR5SegmentTree::NetMulticastPlayDestructionEffects_Implementation()
{
}

#include "R5BoxOverlapTeleportComponent.h"

void UR5BoxOverlapTeleportComponent::OnBoxEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
}

void UR5BoxOverlapTeleportComponent::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
}

UR5BoxOverlapTeleportComponent::UR5BoxOverlapTeleportComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

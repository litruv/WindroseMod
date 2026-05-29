#include "R5Bobber.h"

void AR5Bobber::StaticRegisterNativesAR5Bobber()
{
}

void AR5Bobber::OnMovementStop(const FHitResult& ImpactResult)
{
}

void AR5Bobber::OnRep_CatchItem()
{
}

AR5Bobber::AR5Bobber(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void AR5Bobber::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

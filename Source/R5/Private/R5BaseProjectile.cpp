#include "R5BaseProjectile.h"

void AR5BaseProjectile::StaticRegisterNativesAR5BaseProjectile()
{
}

void AR5BaseProjectile::ProjectileStop(const FHitResult& ImpactResult)
{
}

AR5BaseProjectile::AR5BaseProjectile(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void AR5BaseProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

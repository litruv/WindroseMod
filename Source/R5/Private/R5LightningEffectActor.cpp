#include "R5LightningEffectActor.h"

void AR5LightningEffectActor::StaticRegisterNativesAR5LightningEffectActor()
{
}

AR5LightningEffectActor::AR5LightningEffectActor(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void AR5LightningEffectActor::OnRep_Item()
{
}

void AR5LightningEffectActor::OnEquipmentSceneComponentInitialized()
{
}

void AR5LightningEffectActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

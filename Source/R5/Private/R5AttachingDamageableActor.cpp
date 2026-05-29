#include "R5AttachingDamageableActor.h"

void AR5AttachingDamageableActor::StaticRegisterNativesAR5AttachingDamageableActor()
{
}

void AR5AttachingDamageableActor::OnRep_CurrentState(ER5AttachingDamageableActorState PrevState)
{
}

AR5AttachingDamageableActor::AR5AttachingDamageableActor(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void AR5AttachingDamageableActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

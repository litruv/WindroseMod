#include "R5GOS_GenericActors_Collection.h"

void AR5GOS_GenericActors_Collection::StaticRegisterNativesAR5GOS_GenericActors_Collection()
{
}


void AR5GOS_GenericActors_Collection::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const
{
    TagContainer = BP_GetOwnedGameplayTags();
}

void AR5GOS_GenericActors_Collection::OverlapStopped(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
}

void AR5GOS_GenericActors_Collection::OverlapStarted(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
}

AR5GOS_GenericActors_Collection::AR5GOS_GenericActors_Collection(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}




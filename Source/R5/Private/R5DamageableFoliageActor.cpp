#include "R5DamageableFoliageActor.h"

void AR5DamageableFoliageActor::StaticRegisterNativesAR5DamageableFoliageActor()
{
}


void AR5DamageableFoliageActor::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const
{
    TagContainer = BP_GetOwnedGameplayTags();
}

bool AR5DamageableFoliageActor::HasMatchingGameplayTag(FGameplayTag TagToCheck) const
{
    return BP_GetOwnedGameplayTags().HasTag(TagToCheck);
}

bool AR5DamageableFoliageActor::HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const
{
    return BP_GetOwnedGameplayTags().HasAny(TagContainer);
}

bool AR5DamageableFoliageActor::HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const
{
    return BP_GetOwnedGameplayTags().HasAll(TagContainer);
}

void AR5DamageableFoliageActor::OnRep_OnHealthAlpha()
{
}

void AR5DamageableFoliageActor::OnRep_LootDropped()
{
}

AR5DamageableFoliageActor::AR5DamageableFoliageActor(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void AR5DamageableFoliageActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void AR5DamageableFoliageActor::PlayFXOnLootDrop_Implementation()
{
}

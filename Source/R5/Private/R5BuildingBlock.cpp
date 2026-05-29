#include "R5BuildingBlock.h"

void AR5BuildingBlock::StaticRegisterNativesAR5BuildingBlock()
{
}

AR5BuildingBlock::AR5BuildingBlock(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}



bool AR5BuildingBlock::IsDecayable() const
{
    return false;
}

bool AR5BuildingBlock::IsDamageable() const
{
    return false;
}

void AR5BuildingBlock::OnRep_BuildingItem()
{
}

void AR5BuildingBlock::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

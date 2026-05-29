#include "R5BoardingBattleNew.h"

void AR5BoardingBattleNew::StaticRegisterNativesAR5BoardingBattleNew()
{
}

void AR5BoardingBattleNew::OnVictimEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason)
{
}

void AR5BoardingBattleNew::OnInstigatorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason)
{
}

void AR5BoardingBattleNew::OnRep_VictimData()
{
}

void AR5BoardingBattleNew::OnRep_InstigatorData()
{
}

AR5BoardingBattleNew::AR5BoardingBattleNew(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void AR5BoardingBattleNew::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

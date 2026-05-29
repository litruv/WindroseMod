#include "R5GameProblems.h"

void UR5GameProblems::OnRep_IsDataConsistent()
{
}

bool UR5GameProblems::GetIsR5CheckHappened()
{
    return false;
}

FText UR5GameProblems::GetGameStatusAndCountersText() const
{
    return {};
}

UR5GameProblems* UR5GameProblems::GetR5GameProblems(const UObject* Wco)
{
    return nullptr;
}

UR5GameProblems::UR5GameProblems(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

FText UR5GameProblems::GetGameStatusText() const
{
    return {};
}

ER5GameStatus UR5GameProblems::GetGameStatus() const
{
    return {};
}

bool UR5GameProblems::GetIsDataConsistent() const
{
    return false;
}

void UR5GameProblems::OnRep_WorldHashComputed()
{
}

void UR5GameProblems::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

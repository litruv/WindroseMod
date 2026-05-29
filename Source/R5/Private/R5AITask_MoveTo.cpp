#include "R5AITask_MoveTo.h"

UR5AITask_MoveTo* UR5AITask_MoveTo::R5AIMoveTo(AAIController* Controller, FVector GoalLocation, AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag::Type> StopOnOverlap, TEnumAsByte<EAIOptionFlag::Type> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuousGoalTracking, TEnumAsByte<EAIOptionFlag::Type> ProjectGoalOnNavigation)
{
    return nullptr;
}

UR5AITask_MoveTo::UR5AITask_MoveTo()
    : Super(FObjectInitializer::Get())
{
}


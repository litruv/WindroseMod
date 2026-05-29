#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AITask_MoveTo -FallbackName=AITask_MoveTo
#include "Tasks/AITask_MoveTo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EAIOptionFlag -FallbackName=EAIOptionFlag
#include "AITypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
#include "R5AITask_MoveTo.generated.h"

class AAIController;
class AActor;
class UR5AITask_MoveTo;

UCLASS(Blueprintable)
class R5_API UR5AITask_MoveTo : public UAITask_MoveTo {
    GENERATED_BODY()
public:
    UR5AITask_MoveTo();

    UFUNCTION(BlueprintCallable)
    static UR5AITask_MoveTo* R5AIMoveTo(AAIController* Controller, FVector GoalLocation, AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag::Type> StopOnOverlap, TEnumAsByte<EAIOptionFlag::Type> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuousGoalTracking, TEnumAsByte<EAIOptionFlag::Type> ProjectGoalOnNavigation);
    
};


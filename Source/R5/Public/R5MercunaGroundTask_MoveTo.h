#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Mercuna -ObjectName=MercunaGroundTask_MoveTo -FallbackName=MercunaGroundTask_MoveTo
#include "MercunaGroundTask_MoveTo.h"
#include "R5MercunaGroundTask_MoveTo.generated.h"

class AAIController;
class AActor;
class UR5MercunaGroundTask_MoveTo;

UCLASS(Blueprintable)
class R5_API UR5MercunaGroundTask_MoveTo : public UMercunaGroundTask_MoveTo {
    GENERATED_BODY()
public:
    UR5MercunaGroundTask_MoveTo();

    UFUNCTION(BlueprintCallable)
    static UR5MercunaGroundTask_MoveTo* R5AIMoveTo(AAIController* Controller, const FVector& GoalLocation, const TArray<FVector>& WaypointLocations, AActor* GoalActor, const FVector& StartDirection, const FVector& EndDirection, float EndDistance, bool AcceptPartialPath, bool bLockAILogic);
    
};


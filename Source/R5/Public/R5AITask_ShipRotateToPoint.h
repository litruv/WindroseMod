#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AITask -FallbackName=AITask
#include "Tasks/AITask.h"
#include "R5AITask_ShipRotateToPoint.generated.h"

class APawn;

UCLASS(Blueprintable)
class R5_API UR5AITask_ShipRotateToPoint : public UAITask {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* Pawn;
    
public:
    UR5AITask_ShipRotateToPoint();

};


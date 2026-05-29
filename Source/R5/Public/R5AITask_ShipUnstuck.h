#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AITask -FallbackName=AITask
#include "Tasks/AITask.h"
#include "R5AITask_ShipUnstuck.generated.h"

UCLASS(Blueprintable)
class R5_API UR5AITask_ShipUnstuck : public UAITask {
    GENERATED_BODY()
public:
    UR5AITask_ShipUnstuck();

};


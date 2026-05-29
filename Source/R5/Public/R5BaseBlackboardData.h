#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardData -FallbackName=BlackboardData
#include "BehaviorTree/BlackboardData.h"
#include "R5BaseBlackboardData.generated.h"

UCLASS(Blueprintable)
class R5_API UR5BaseBlackboardData : public UBlackboardData {
    GENERATED_BODY()
public:
    UR5BaseBlackboardData();

};


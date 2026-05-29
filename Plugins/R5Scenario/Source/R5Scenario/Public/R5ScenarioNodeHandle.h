#pragma once
#include "CoreMinimal.h"
#include "R5ScenarioNodeHandle.generated.h"

class UR5ScenarioNode;

USTRUCT(BlueprintType)
struct R5SCENARIO_API FR5ScenarioNodeHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UR5ScenarioNode> Node;
    
    FR5ScenarioNodeHandle();
};


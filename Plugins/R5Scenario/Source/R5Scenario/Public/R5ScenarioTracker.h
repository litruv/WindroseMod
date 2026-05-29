#pragma once
#include "CoreMinimal.h"
#include "R5ScenarioNode.h"
#include "R5ScenarioTracker.generated.h"

UCLASS(Abstract, Blueprintable)
class R5SCENARIO_API UR5ScenarioTracker : public UR5ScenarioNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UR5ScenarioTracker();

};


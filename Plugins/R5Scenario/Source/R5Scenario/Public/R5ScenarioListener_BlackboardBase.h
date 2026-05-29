#pragma once
#include "CoreMinimal.h"
#include "ER5ScenarioBlackboardType.h"
#include "R5ScenarioGraphNodeListener.h"
#include "R5ScenarioWildcardVariableStruct.h"
#include "R5ScenarioListener_BlackboardBase.generated.h"

class UR5ScenarioBlackboard;

UCLASS(Blueprintable)
class R5SCENARIO_API UR5ScenarioListener_BlackboardBase : public UR5ScenarioGraphNodeListener {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5ScenarioBlackboardType Blackboard;
    
    UR5ScenarioListener_BlackboardBase();

    UFUNCTION(BlueprintCallable)
    void OnBlackboardChanged(UR5ScenarioBlackboard* BlackboardP, const FR5ScenarioWildcardVariableStruct& Val);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnBlackboardChanged(UR5ScenarioBlackboard* BlackboardP);
    
};


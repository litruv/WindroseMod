#pragma once
#include "CoreMinimal.h"
#include "R5ScenarioNode.h"
#include "R5ScenarioGraph.generated.h"

class UR5BLScenarioSave_ScenarioView;
class UR5ScenarioBlackboard;
class UR5ScenarioExecutor;
class UR5ScenarioWorldProxy;

UCLASS(Blueprintable)
class R5SCENARIO_API UR5ScenarioGraph : public UR5ScenarioNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldLiveWithOwner;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLScenarioSave_ScenarioView* ScenarioView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ScenarioWorldProxy* WorldProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ScenarioBlackboard* LocalBlackboard;
    
public:
    UR5ScenarioGraph();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UR5ScenarioExecutor* GetExecutor() const;
    
    UFUNCTION(BlueprintCallable)
    void EndScenario();
    
};


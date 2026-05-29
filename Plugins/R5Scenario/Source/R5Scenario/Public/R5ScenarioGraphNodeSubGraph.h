#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "Misc/Guid.h"
#include "R5ScenarioGraphNode.h"
#include "Templates/SubclassOf.h"
#include "R5ScenarioGraphNodeSubGraph.generated.h"

class UObject;
class UR5ScenarioGraphNodeSubGraph;

UCLASS(Abstract, Blueprintable)
class R5SCENARIO_API UR5ScenarioGraphNodeSubGraph : public UR5ScenarioGraphNode {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGraphEnd, FName, OutName);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGraphEnd OnGraphEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> OutputList;
    
    UR5ScenarioGraphNodeSubGraph();

    UFUNCTION(BlueprintCallable)
    void TriggerPinEvent(FName OutName);
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetEndGraphValidNames();
    
    UFUNCTION(BlueprintCallable)
    void EndGraph(FName OutName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UR5ScenarioGraphNodeSubGraph* CreateSubGraphNode(UObject* WorldContextObject, TSubclassOf<UR5ScenarioGraphNodeSubGraph> SubGraphClass, FGuid Guid, UR5ScenarioGraphNodeSubGraph*& OutObj);
    
};


#include "R5ScenarioGraphNodeSubGraph.h"
#include "Templates/SubclassOf.h"

UR5ScenarioGraphNodeSubGraph::UR5ScenarioGraphNodeSubGraph() {
}

void UR5ScenarioGraphNodeSubGraph::TriggerPinEvent(FName OutName) {
}

TArray<FName> UR5ScenarioGraphNodeSubGraph::GetEndGraphValidNames() {
    return TArray<FName>();
}

void UR5ScenarioGraphNodeSubGraph::EndGraph(FName OutName) {
}

UR5ScenarioGraphNodeSubGraph* UR5ScenarioGraphNodeSubGraph::CreateSubGraphNode(UObject* WorldContextObject, TSubclassOf<UR5ScenarioGraphNodeSubGraph> SubGraphClass, FGuid Guid, UR5ScenarioGraphNodeSubGraph*& OutObj) {
    return NULL;
}



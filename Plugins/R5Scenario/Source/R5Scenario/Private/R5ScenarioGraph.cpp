#include "R5ScenarioGraph.h"

UR5ScenarioGraph::UR5ScenarioGraph() {
    this->ShouldLiveWithOwner = false;
    this->ScenarioView = NULL;
    this->WorldProxy = NULL;
    this->LocalBlackboard = NULL;
}

UR5ScenarioExecutor* UR5ScenarioGraph::GetExecutor() const {
    return NULL;
}

void UR5ScenarioGraph::EndScenario() {
}



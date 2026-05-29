#include "R5ScenarioGraphNode.h"

UR5ScenarioGraphNode::UR5ScenarioGraphNode() {
    this->Target = NULL;
}

void UR5ScenarioGraphNode::OnNodeCreated() {
}

void UR5ScenarioGraphNode::LoadParametersFromString(const FString& String) {
}

TArray<FName> UR5ScenarioGraphNode::GetBlueprintProperty() const {
    return TArray<FName>();
}



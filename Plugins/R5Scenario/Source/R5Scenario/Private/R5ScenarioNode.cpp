#include "R5ScenarioNode.h"

UR5ScenarioNode::UR5ScenarioNode() {
    this->ShouldHideNodePin = true;
}

void UR5ScenarioNode::RemoveScenarioDestructionProtection() {
}





FR5BLRecordId UR5ScenarioNode::GetRootExecutorId() const {
    return FR5BLRecordId{};
}

AActor* UR5ScenarioNode::GetRootActor() {
    return NULL;
}

AActor* UR5ScenarioNode::GetOwnerActor() const {
    return NULL;
}

FR5ScenarioNodeHandle UR5ScenarioNode::GetNodeHandle() {
    return FR5ScenarioNodeHandle{};
}

UR5ScenarioBlackboard* UR5ScenarioNode::GetBlackboard(ER5ScenarioBlackboardType BlackboardType) const {
    return NULL;
}

UR5ScenarioGraph* UR5ScenarioNode::GetBaseGraph() const {
    return NULL;
}

AActor* UR5ScenarioNode::GetAvatarActor() const {
    return NULL;
}

UR5ScenarioBlackboard* UR5ScenarioNode::GetActorBlackboard(AActor* Actor, ER5ScenarioBlackboardType BlackboardType) const {
    return NULL;
}

void UR5ScenarioNode::AddScenarioDestructionProtection() {
}



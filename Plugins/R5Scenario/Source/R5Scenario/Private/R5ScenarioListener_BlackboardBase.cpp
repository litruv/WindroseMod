#include "R5ScenarioListener_BlackboardBase.h"

UR5ScenarioListener_BlackboardBase::UR5ScenarioListener_BlackboardBase() {
    this->CPinNames.AddDefaulted(1);
    this->Blackboard = ER5ScenarioBlackboardType::DefaultBlackboardType;
}

void UR5ScenarioListener_BlackboardBase::OnBlackboardChanged(UR5ScenarioBlackboard* BlackboardP, const FR5ScenarioWildcardVariableStruct& Val) {
}




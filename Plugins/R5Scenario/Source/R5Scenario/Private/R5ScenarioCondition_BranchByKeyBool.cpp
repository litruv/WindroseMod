#include "R5ScenarioCondition_BranchByKeyBool.h"

UR5ScenarioCondition_BranchByKeyBool::UR5ScenarioCondition_BranchByKeyBool() {
    this->Description = TEXT("Returns to True if (Any Flag)/(All Flags) in Blackboard are TRUE, else return to False");
    this->CPinNames.AddDefaulted(3);
    this->OutputList.AddDefaulted(2);
    this->Blackboard = ER5ScenarioBlackboardType::DefaultBlackboardType;
    this->MatchAllFlags = false;
}



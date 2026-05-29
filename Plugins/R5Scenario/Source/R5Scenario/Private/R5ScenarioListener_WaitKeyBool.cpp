#include "R5ScenarioListener_WaitKeyBool.h"

UR5ScenarioListener_WaitKeyBool::UR5ScenarioListener_WaitKeyBool() {
    this->Description = TEXT("Returns to Success when (Any Flag)/(All Flags) in Blackboard are TRUE");
    this->CPinNames.AddDefaulted(4);
    this->OutputList.AddDefaulted(1);
    this->MatchAllFlags = false;
    this->ReverseFlags = false;
}



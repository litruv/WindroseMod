#include "R5ScenarioListener_WaitKeyValueChanged.h"

UR5ScenarioListener_WaitKeyValueChanged::UR5ScenarioListener_WaitKeyValueChanged() {
    this->Description = TEXT("Returns to Success when Key in Blackboard has changed");
    this->CPinNames.AddDefaulted(2);
    this->OutputList.AddDefaulted(1);
}



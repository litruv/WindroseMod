#include "R5ScenarioListener_WaitKeyValueInt.h"

UR5ScenarioListener_WaitKeyValueInt::UR5ScenarioListener_WaitKeyValueInt() {
    this->Description = TEXT("Returns to Success when Key in Blackboard and Value are good for ComparisonType");
    this->CPinNames.AddDefaulted(4);
    this->OutputList.AddDefaulted(1);
    this->ComparisonType = ER5ScenarioMathComparison::Equal;
    this->Value = 0;
}



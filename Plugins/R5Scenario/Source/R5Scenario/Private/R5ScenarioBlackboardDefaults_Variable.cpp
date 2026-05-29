#include "R5ScenarioBlackboardDefaults_Variable.h"

FR5ScenarioBlackboardDefaults_Variable::FR5ScenarioBlackboardDefaults_Variable() {
    this->IsPersistant = false;
    this->VariableType = ER5BLScenarioSave_BlackboardValueType::Bool;
    this->ContainerType = ER5BLScenarioSave_BlackboardContainerType::Value;
    this->ValueBool = false;
    this->ValueInt = 0;
    this->ValueFloat = 0.00f;
}


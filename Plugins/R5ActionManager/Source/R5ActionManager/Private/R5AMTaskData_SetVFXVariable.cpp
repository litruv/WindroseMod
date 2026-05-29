#include "R5AMTaskData_SetVFXVariable.h"

FR5AMTaskData_SetVFXVariable::FR5AMTaskData_SetVFXVariable() {
    this->VariableType = ER5AMTaskData_VFXVariableType::Bool;
    this->BoolValue = false;
    this->FloatValue = 0.00f;
}


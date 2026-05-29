#include "R5N_Units.h"

UR5N_Units::UR5N_Units() {
}

ER5N_UnitType UR5N_Units::GetUnitType(ER5N_Unit Unit) {
    return ER5N_UnitType::Length;
}

FR5N_UnitDescription UR5N_Units::GetUnitDescription(ER5N_Unit Unit) {
    return FR5N_UnitDescription{};
}

float UR5N_Units::GetGravityConst() {
    return 0.0f;
}

ER5N_Unit UR5N_Units::GetDefaultUnitForUnitType(ER5N_UnitType UnitType) {
    return ER5N_Unit::Length_cm;
}

float UR5N_Units::ConvertUnitToUnit(float Value, ER5N_Unit FromUnit, ER5N_Unit ToUnit) {
    return 0.0f;
}

float UR5N_Units::ConvertUnitToDefault(float Value, ER5N_Unit Unit) {
    return 0.0f;
}

float UR5N_Units::ConvertDefaultToUnit(float DefaultValue, ER5N_Unit ToUnit) {
    return 0.0f;
}



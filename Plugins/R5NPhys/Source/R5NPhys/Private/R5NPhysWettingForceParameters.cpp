#include "R5NPhysWettingForceParameters.h"

FR5NPhysWettingForceParameters::FR5NPhysWettingForceParameters() {
    this->WettingCoefficient = 0.00f;
    this->MaxStretchLength = 0.00f;
    this->AttachmentLevelAdjustmentMult = 0.00f;
    this->ShapeType = ER5NPhys_ShapeType::Point;
}


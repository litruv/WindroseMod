#include "R5NPhysFrictionForceParameters.h"

FR5NPhysFrictionForceParameters::FR5NPhysFrictionForceParameters() {
    this->FrictionCoefficient = 0.00f;
    this->MediumType = ER5N_MediumType::Unknown;
    this->bConsiderMediumVelocity = false;
    this->ConsiderMediumVelocityAnchorState = ER5AnchorState::Any;
    this->CheckMediumBorder = false;
    this->OnlyDetectedDirection = false;
    this->ShapeType = ER5NPhys_ShapeType::Point;
    this->DirectionRestriction = ER5NPhys_DirectionRestriction::AnyDirection;
}


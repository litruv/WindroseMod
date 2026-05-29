#include "R5NPhysForceParameters.h"

FR5NPhysForceParameters::FR5NPhysForceParameters() {
    this->GraphDrawMode = EForceGraphDrawMode::DoNotDraw;
    this->bDrawExtremum = false;
    this->bEnabled = false;
    this->bNeedWaterLevel = false;
    this->bDrawForce = false;
    this->AnchorState = ER5AnchorState::Any;
}


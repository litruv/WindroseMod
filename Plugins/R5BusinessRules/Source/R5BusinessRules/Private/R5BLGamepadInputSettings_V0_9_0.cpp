#include "R5BLGamepadInputSettings_V0_9_0.h"

FR5BLGamepadInputSettings_V0_9_0::FR5BLGamepadInputSettings_V0_9_0() {
    this->bForceFeedbackEnabled = false;
    this->GamepadMoveStickDeadZone = 0.00f;
    this->GamepadLookStickDeadZone = 0.00f;
    this->bGamepadInvertVerticalAxis = false;
    this->bGamepadInvertHorizontalAxis = false;
    this->GamepadLookSensitivityPreset = ER5BLGamepadSensitivity_V0_9_0::Invalid;
    this->GamepadTargetingSensitivityPreset = ER5BLGamepadSensitivity_V0_9_0::Invalid;
    this->GamepadUIPointerSensitivityPreset = ER5BLGamepadSensitivity_V0_9_0::Invalid;
}


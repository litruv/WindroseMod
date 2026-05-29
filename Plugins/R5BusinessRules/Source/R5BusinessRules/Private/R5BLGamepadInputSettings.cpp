#include "R5BLGamepadInputSettings.h"

FR5BLGamepadInputSettings::FR5BLGamepadInputSettings() {
    this->bForceFeedbackEnabled = false;
    this->GamepadMoveStickDeadZone = 0.00f;
    this->GamepadLookStickDeadZone = 0.00f;
    this->bGamepadInvertVerticalAxis = false;
    this->bGamepadInvertHorizontalAxis = false;
    this->GamepadLookSensitivityPreset = ER5BLGamepadSensitivity::Invalid;
    this->GamepadTargetingSensitivityPreset = ER5BLGamepadSensitivity::Invalid;
    this->GamepadUIPointerSensitivityPreset = ER5BLGamepadSensitivity::Invalid;
}


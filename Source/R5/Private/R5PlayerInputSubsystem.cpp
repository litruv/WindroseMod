#include "R5PlayerInputSubsystem.h"

UR5GamepadCursor* UR5PlayerInputSubsystem::GetGamepadCursorWidget(UObject* Wco)
{
    return nullptr;
}

ER5InputMode UR5PlayerInputSubsystem::GetInputMode() const
{
    return {};
}

UEnhancedInputComponent* UR5PlayerInputSubsystem::GetEnhancedInputComponent(const UObject* Wco)
{
    return nullptr;
}

bool UR5PlayerInputSubsystem::IsKeyboardMouse() const
{
    return false;
}

void UR5PlayerInputSubsystem::SetInputMode(UObject* Wco, ER5InputMode Mode, bool bFlushInput)
{
}

bool UR5PlayerInputSubsystem::IsGamepad() const
{
    return false;
}

ER5GamepadCursorMode UR5PlayerInputSubsystem::GetGamepadCursorMode() const
{
    return {};
}

void UR5PlayerInputSubsystem::SetGamepadCursorMode(ER5GamepadCursorMode Mode)
{
}

void UR5PlayerInputSubsystem::ToggleCursorModes()
{
}

void UR5PlayerInputSubsystem::SetWidgetToFocus(UWidget* WidgetToFocus)
{
}

UR5PlayerInputSubsystem* UR5PlayerInputSubsystem::GetInputSubsystem(const UObject* Wco)
{
    return nullptr;
}

ER5InputType UR5PlayerInputSubsystem::GetInputType() const
{
    return {};
}

void UR5PlayerInputSubsystem::SetIgnoreScroll(bool bEnable)
{
}

UR5PlayerInputSubsystem::UR5PlayerInputSubsystem()
{
}

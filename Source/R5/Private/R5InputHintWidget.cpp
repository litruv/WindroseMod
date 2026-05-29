#include "R5InputHintWidget.h"

TArray<FR5UIInputActionData> UR5InputHintWidget::GetInputActionDataAndBindHold(const UInputAction* Action)
{
    return {};
}

TArray<FR5UIInputActionData> UR5InputHintWidget::GetChordKeysFromInputAction(const UInputAction* Action)
{
    return {};
}

void UR5InputHintWidget::InputChanged(ER5InputType InputType)
{
}

UR5InputHintWidget::UR5InputHintWidget()
    : Super(FObjectInitializer::Get())
{
}

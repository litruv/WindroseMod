#include "GameSettingListEntrySetting_Scalar.h"

UGameSettingListEntrySetting_Scalar::UGameSettingListEntrySetting_Scalar() {
    this->ScalarSetting = NULL;
}

void UGameSettingListEntrySetting_Scalar::HandleValueChanged(float Value) {
}

float UGameSettingListEntrySetting_Scalar::GetValue() const {
    return 0.0f;
}

FText UGameSettingListEntrySetting_Scalar::GetFormattedText() const {
    return FText::GetEmpty();
}



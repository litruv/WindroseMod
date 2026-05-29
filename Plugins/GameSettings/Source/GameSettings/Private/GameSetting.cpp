#include "GameSetting.h"

UGameSetting::UGameSetting() {
    this->LocalPlayer = NULL;
    this->SettingParent = NULL;
    this->OwningRegistry = NULL;
}

bool UGameSetting::IsActive() {
    return false;
}

FText UGameSetting::GetDisplayName() const {
    return FText::GetEmpty();
}

FName UGameSetting::GetDevName() const {
    return NAME_None;
}



#include "GameSettingScreen.h"

UGameSettingScreen::UGameSettingScreen() : UUserWidget(FObjectInitializer::Get()) {
    this->Settings_Panel = NULL;
    this->Registry = NULL;
}

void UGameSettingScreen::SetRegistry(UGameSettingRegistry* InRegistry) {
}

void UGameSettingScreen::ResetToDefault() {
}

void UGameSettingScreen::NavigateToSettings(const TArray<FName>& SettingDevNames) {
}

void UGameSettingScreen::NavigateToSetting(UGameSetting* Setting) {
}

bool UGameSettingScreen::HaveSettingsBeenChanged() const {
    return false;
}

UGameSettingCollection* UGameSettingScreen::GetSettingCollection(const FName& SettingDevName, bool& IsEnabled) {
    return NULL;
}

void UGameSettingScreen::CancelChanges() {
}

bool UGameSettingScreen::AttemptToPopNavigation() {
    return false;
}

void UGameSettingScreen::ApplyChanges() {
}



#include "GameSettingPanel.h"

UGameSettingPanel::UGameSettingPanel() : UUserWidget(FObjectInitializer::Get()) {
    this->Registry = NULL;
    this->LastHoveredOrSelectedSetting = NULL;
    this->ListView_Settings = NULL;
}



#include "GameSettingListEntryBase.h"

UGameSettingListEntryBase::UGameSettingListEntryBase() : UUserWidget(FObjectInitializer::Get()) {
    this->Setting = NULL;
    this->bIsEnabledState = true;
}



TArray<FText> UGameSettingListEntryBase::GetDisabledReasons() {
    return TArray<FText>();
}



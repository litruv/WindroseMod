#include "GameSettingListEntrySetting_Discrete.h"

UGameSettingListEntrySetting_Discrete::UGameSettingListEntrySetting_Discrete() {
    this->DiscreteSetting = NULL;
}

void UGameSettingListEntrySetting_Discrete::HandleChangedValue(int32 Value) {
}

TArray<FText> UGameSettingListEntrySetting_Discrete::GetOptions() const {
    return TArray<FText>();
}

int32 UGameSettingListEntrySetting_Discrete::GetDiscreteOptionIndex() const {
    return 0;
}



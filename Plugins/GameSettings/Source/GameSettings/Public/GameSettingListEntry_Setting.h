#pragma once
#include "CoreMinimal.h"
#include "GameSettingListEntryBase.h"
#include "GameSettingListEntry_Setting.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMESETTINGS_API UGameSettingListEntry_Setting : public UGameSettingListEntryBase {
    GENERATED_BODY()
public:
    UGameSettingListEntry_Setting();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSettingName() const;
    
};


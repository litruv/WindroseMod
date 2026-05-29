#pragma once
#include "CoreMinimal.h"
#include "GameSettingListEntry_Setting.h"
#include "GameSettingListEntrySetting_Navigation.generated.h"

class UGameSettingCollectionPage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMESETTINGS_API UGameSettingListEntrySetting_Navigation : public UGameSettingListEntry_Setting {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameSettingCollectionPage* CollectionSetting;
    
public:
    UGameSettingListEntrySetting_Navigation();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSettingAssigned(const FText& ActionText);
    
    UFUNCTION(BlueprintCallable)
    void HandleNavigationButtonClicked();
    
};


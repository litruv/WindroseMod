#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserObjectListEntry -FallbackName=UserObjectListEntry
#include "Blueprint/IUserObjectListEntry.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Blueprint/UserWidget.h"
#include "GameSettingListEntryBase.generated.h"

class UGameSetting;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMESETTINGS_API UGameSettingListEntryBase : public UUserWidget, public IUserObjectListEntry {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameSetting* Setting;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabledState;
    
public:
    UGameSettingListEntryBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRefresh();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialize();
    
    UFUNCTION(BlueprintCallable)
    TArray<FText> GetDisabledReasons();
    

    // Fix for true pure virtual functions not being implemented
};


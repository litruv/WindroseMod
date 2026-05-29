#pragma once
#include "CoreMinimal.h"
#include "GameSettingListEntry_Setting.h"
#include "GameSettingListEntrySetting_Discrete.generated.h"

class UGameSettingValueDiscrete;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMESETTINGS_API UGameSettingListEntrySetting_Discrete : public UGameSettingListEntry_Setting {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameSettingValueDiscrete* DiscreteSetting;
    
public:
    UGameSettingListEntrySetting_Discrete();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleChangedValue(int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetOptions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDiscreteOptionIndex() const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "GameSettingListEntry_Setting.h"
#include "GameSettingListEntrySetting_Scalar.generated.h"

class UGameSettingValueScalarDynamic;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMESETTINGS_API UGameSettingListEntrySetting_Scalar : public UGameSettingListEntry_Setting {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameSettingValueScalarDynamic* ScalarSetting;
    
public:
    UGameSettingListEntrySetting_Scalar();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleValueChanged(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFormattedText() const;
    
};


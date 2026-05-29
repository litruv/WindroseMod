#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "GameSettingActionInterface.generated.h"

class UGameSetting;

UINTERFACE(Blueprintable, MinimalAPI)
class UGameSettingActionInterface : public UInterface {
    GENERATED_BODY()
};

class IGameSettingActionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ExecuteActionForSetting(FGameplayTag ActionTag, UGameSetting* InSetting);
    
};


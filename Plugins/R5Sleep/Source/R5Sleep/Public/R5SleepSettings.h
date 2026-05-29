#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "Engine/DeveloperSettings.h"
#include "R5SleepSettings.generated.h"

class UR5SleepParams;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class R5SLEEP_API UR5SleepSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5SleepParams> SleepParams;
    
public:
    UR5SleepSettings();

};


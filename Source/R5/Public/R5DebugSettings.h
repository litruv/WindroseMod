#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "Engine/DeveloperSettings.h"
#include "R5DebugSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class R5_API UR5DebugSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDebugStatistic;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDebugStatisticByDefault;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDebugCustomization;
    
public:
    UR5DebugSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDebugStatisticEnabledByDefault();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDebugStatisticEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDebugCustomizationEnabled();
    
};


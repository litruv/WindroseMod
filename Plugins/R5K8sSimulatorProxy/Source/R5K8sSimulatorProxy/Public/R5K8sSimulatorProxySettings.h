#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "Engine/DeveloperSettings.h"
#include "ER5K8sSimulatorProxyChannel.h"
#include "R5K8sSimulatorProxySettings.generated.h"

class UR5K8sSimulatorProxySettings;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class R5K8SSIMULATORPROXY_API UR5K8sSimulatorProxySettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5K8sSimulatorProxyChannel CommunicationChannel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString K8sSimulatorAddress;
    
    UR5K8sSimulatorProxySettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UR5K8sSimulatorProxySettings* Get();
    
};


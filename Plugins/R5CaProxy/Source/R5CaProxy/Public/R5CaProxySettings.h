#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "Engine/DeveloperSettings.h"
#include "ER5CaProxySettings_ClientAuthorizationType.h"
#include "ER5CaProxySettings_ServerAuthorizationType.h"
#include "R5CaProxySettings_Api.h"
#include "R5CaProxySettings_RegionsMapping.h"
#include "R5CoopPingerSettings.h"
#include "R5CaProxySettings.generated.h"

class UR5CaProxySettings;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class R5CAPROXY_API UR5CaProxySettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5CaProxySettings_ClientAuthorizationType ClientAuthorizationType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5CaProxySettings_ServerAuthorizationType ServerAuthorizationType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AppSecretKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5CaProxySettings_RegionsMapping> RegionsArray;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5CaProxySettings_Api Api;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5CoopPingerSettings PingerSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SuccessAttemptsForAvailable;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxPingForAvailable;
    
    UR5CaProxySettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UR5CaProxySettings* GetR5CaProxySettings();
    
};


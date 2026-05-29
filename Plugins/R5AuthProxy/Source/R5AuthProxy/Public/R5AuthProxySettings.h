#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "Engine/DeveloperSettings.h"
#include "ER5BackAuth_AuthServerType.h"
#include "ER5BackAuth_AuthorizationPlatform.h"
#include "R5RegionsMapping.h"
#include "R5AuthProxySettings.generated.h"

class UR5AuthProxySettings;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class R5AUTHPROXY_API UR5AuthProxySettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AuthServerOnPremiseAddress;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AuthServerOnPremisePort;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5RegionsMapping> RegionsArray;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5BackAuth_AuthServerType AuthorizationType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5BackAuth_AuthorizationPlatform AuthorizationPlatform;
    
    UR5AuthProxySettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UR5AuthProxySettings* GetR5AuthProxySettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FR5RegionsMapping> GetDefaultRegions() const;
    
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "Engine/DeveloperSettings.h"
#include "R5NetGrpcSettings.generated.h"

class UR5NetGrpcSettings;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class R5NET_API UR5NetGrpcSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Dev_UseHttpProxy;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Dev_HttpProxy;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Dev_UseEnvSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> Dev_EnvSettings;
    
    UR5NetGrpcSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UR5NetGrpcSettings* Get();
    
};


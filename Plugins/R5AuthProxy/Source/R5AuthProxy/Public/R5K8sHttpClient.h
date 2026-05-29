#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CommonUtils -ObjectName=R5BaseHttpClient -FallbackName=R5BaseHttpClient
#include "R5BaseHttpClient.h"
#include "R5K8sHttpClient.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class UR5K8sHttpClient : public UR5BaseHttpClient {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Route_GetBackendServer;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Route_PostBackendServer;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BackendBuildType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString K8sOperatorVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> BackendRegionIds;
    
public:
    UR5K8sHttpClient();

};


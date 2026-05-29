#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "Subsystems/GameInstanceSubsystem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
#include "R5AuthProxyForClient.generated.h"

class UR5AuthHttpClient;
class UR5K8sHttpClient;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class R5AUTHPROXY_API UR5AuthProxyForClient : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AuthHttpClient* AuthHttpClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5K8sHttpClient* K8sHttpClient;
    
public:
    UR5AuthProxyForClient();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoggedIn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetOtp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetEmail() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FR5BLRecordId GetAccountId() const;
    
};


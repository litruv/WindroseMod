#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameServerParams.h"
#include "PayloadGameServerGetResponse.h"
#include "PayloadGameServerGetResponseItem.h"
#include "R5K8sClient.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class R5K8SCLIENT_API UR5K8sClient : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnRequestError, int32, EHttpRequestStatusType, int32, StatusCode, const FString&, Message);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameServersGet, FPayloadGameServerGetResponse, Response);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameServersCreate, FPayloadGameServerGetResponseItem, Response);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameServerGet, FPayloadGameServerGetResponseItem, Response);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameServersCreate OnGameServersCreate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameServersGet OnGameServersGet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameServerGet OnGameServerGet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestError OnRequestError;
    
    UR5K8sClient();

    UFUNCTION(BlueprintCallable)
    bool ValidateServerName(const FString& ServerName);
    
    UFUNCTION(BlueprintCallable)
    void SetGameServerTechName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void OpenLevel(const FPayloadGameServerGetResponseItem& Response);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsVersionCompatible(const FPayloadGameServerGetResponseItem& Item);
    
    UFUNCTION(BlueprintCallable)
    FString GetGameServerTechName();
    
    UFUNCTION(BlueprintCallable)
    void GetGameServers(const FGameServerParams& Params);
    
    UFUNCTION(BlueprintCallable)
    void GetGameServer(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void CreateGameServer(const FGameServerParams& Params);
    
};


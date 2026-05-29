#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=ENetworkFailure -FallbackName=ENetworkFailure
#include "ER5DataKeeperUI_BackendType.h"
#include "R5DataKeeper.h"
#include "R5DataKeeperForClient.generated.h"

class UNetDriver;
class UR5DataKeeperForClient_LocalAccount;
class UR5DataKeeperForClient_SimulatedAccount;
class UR5DataKeeperLoadingScreenHolder;
class UWorld;

UCLASS(Blueprintable)
class R5DATAKEEPERS_API UR5DataKeeperForClient : public UR5DataKeeper {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerDisconnected, const FString&, PlayerName);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerConnected, const FString&, PlayerName);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerConnected OnPlayerConnected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerDisconnected OnPlayerDisconnected;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5DataKeeperForClient_LocalAccount* LocalAccount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5DataKeeperForClient_SimulatedAccount*> SimulatedAccounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5DataKeeperLoadingScreenHolder* LoadingScreenHolder;
    
public:
    UR5DataKeeperForClient();

    UFUNCTION(BlueprintCallable)
    void StartLobby();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUeNetworkFailure(UWorld* World, UNetDriver* NetDriver, TEnumAsByte<ENetworkFailure::Type> ErrorType, const FString& ErrorMessage);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5DataKeeperForClient_LocalAccount* GetLocalAccount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ER5DataKeeperUI_BackendType GetBackendType() const;
    
};


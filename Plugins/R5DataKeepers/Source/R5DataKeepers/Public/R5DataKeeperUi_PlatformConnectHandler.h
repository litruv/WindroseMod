#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GCFSM -ObjectName=HFSMStateComponent -FallbackName=HFSMStateComponent
#include "HFSMStateComponent.h"
#include "R5DataKeeperUi_PlatformConnectHandler.generated.h"

class UR5LoadingScreenHolder;

UCLASS(Blueprintable, EditInlineNew)
class R5DATAKEEPERS_API UR5DataKeeperUi_PlatformConnectHandler : public UHFSMStateComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamGameJoinRequested, const FString&, JoinStr);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSteamGameJoinRequested OnGameJoinRequested;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5LoadingScreenHolder* LoadingScreenHolder;
    
public:
    UR5DataKeeperUi_PlatformConnectHandler();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ShowLoadingScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool ParseServerJoinedConnectionString(const FString& JoinedConnectionString, FString& OutSessionId, bool& OutIsPasswordProtected) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void HideLoadingScreen() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleGameJoinRequested(const FString& JoinStr);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FString GetCurrentServerJoinedConnectionString() const;
    
};


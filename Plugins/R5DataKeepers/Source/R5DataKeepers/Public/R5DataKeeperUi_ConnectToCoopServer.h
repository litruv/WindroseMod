#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CoopProxy -ObjectName=R5CoopProxyUi_ServerDescription -FallbackName=R5CoopProxyUi_ServerDescription
#include "R5CoopProxyUi_ServerDescription.h"
#include "ER5DataKeeperUi_CoopResultType.h"
#include "R5DataKeeperUi_BaseAction.h"
#include "R5DataKeeperUi_ConnectToCoopServer.generated.h"

class UObject;
class UR5DataKeeperUi_ConnectToCoopServer;

UCLASS(Blueprintable)
class R5DATAKEEPERS_API UR5DataKeeperUi_ConnectToCoopServer : public UR5DataKeeperUi_BaseAction {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCompleted, ER5DataKeeperUi_CoopResultType, ErrorCode);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCompleted OnCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCompleted OnFailed;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Wco;
    
public:
    UR5DataKeeperUi_ConnectToCoopServer();

    UFUNCTION(BlueprintCallable)
    static UR5DataKeeperUi_ConnectToCoopServer* ConnectToCoopServer(UObject* InWco, const FR5CoopProxyUi_ServerDescription& InServerDescription);
    
};


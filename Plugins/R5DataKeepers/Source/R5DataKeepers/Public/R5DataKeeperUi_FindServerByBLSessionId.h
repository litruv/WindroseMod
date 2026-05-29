#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CoopProxy -ObjectName=R5CoopProxyUi_ServerDescription -FallbackName=R5CoopProxyUi_ServerDescription
#include "R5CoopProxyUi_ServerDescription.h"
#include "ER5DataKeeperUi_CoopResultType.h"
#include "R5DataKeeperUi_BaseAction.h"
#include "R5DataKeeperUi_FindServerByBLSessionId.generated.h"

class UObject;
class UR5DataKeeperUi_FindServerByBLSessionId;

UCLASS(Blueprintable)
class R5DATAKEEPERS_API UR5DataKeeperUi_FindServerByBLSessionId : public UR5DataKeeperUi_BaseAction {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCompleted, const FR5CoopProxyUi_ServerDescription&, Result, ER5DataKeeperUi_CoopResultType, ErrorCode);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCompleted OnCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCompleted OnFailed;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Wco;
    
public:
    UR5DataKeeperUi_FindServerByBLSessionId();

    UFUNCTION(BlueprintCallable)
    static UR5DataKeeperUi_FindServerByBLSessionId* FindServerByBLSessionId(UObject* InWco, const FString& InBLSessionId);
    
};


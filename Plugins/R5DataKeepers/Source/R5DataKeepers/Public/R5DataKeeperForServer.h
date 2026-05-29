#pragma once
#include "CoreMinimal.h"
#include "R5DataKeeper.h"
#include "R5DataKeeperForServer.generated.h"

class UR5DataKeeperForServer_Account;

UCLASS(Blueprintable)
class R5DATAKEEPERS_API UR5DataKeeperForServer : public UR5DataKeeper {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5DataKeeperForServer_Account*> Accounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5DataKeeperForServer_Account*> DisconnectedAccounts;
    
public:
    UR5DataKeeperForServer();

};


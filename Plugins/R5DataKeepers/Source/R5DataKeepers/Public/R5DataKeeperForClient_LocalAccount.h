#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
#include "R5DataKeeper_Account.h"
#include "R5DataKeeperForClient_LocalAccount.generated.h"

UCLASS(Blueprintable)
class R5DATAKEEPERS_API UR5DataKeeperForClient_LocalAccount : public UR5DataKeeper_Account {
    GENERATED_BODY()
public:
    UR5DataKeeperForClient_LocalAccount();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetServerHostName() const;
    
    UFUNCTION(BlueprintCallable)
    FR5BLRecordId GetDefaultPlayerIslandId(int32 idx);
    
};


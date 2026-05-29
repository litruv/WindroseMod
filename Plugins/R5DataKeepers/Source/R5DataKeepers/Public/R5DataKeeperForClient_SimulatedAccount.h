#pragma once
#include "CoreMinimal.h"
#include "R5DataKeeper_Account.h"
#include "R5DataKeeperForClient_SimulatedAccount.generated.h"

UCLASS(Blueprintable)
class R5DATAKEEPERS_API UR5DataKeeperForClient_SimulatedAccount : public UR5DataKeeper_Account {
    GENERATED_BODY()
public:
    UR5DataKeeperForClient_SimulatedAccount();

};


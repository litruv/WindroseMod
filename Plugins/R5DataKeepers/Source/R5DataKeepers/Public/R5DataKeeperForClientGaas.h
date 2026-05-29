#pragma once
#include "CoreMinimal.h"
#include "R5DataKeeperForClient.h"
#include "R5DataKeeperForClientGaas.generated.h"

class UR5MatchmakerProxy;

UCLASS(Blueprintable)
class R5DATAKEEPERS_API UR5DataKeeperForClientGaas : public UR5DataKeeperForClient {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MatchmakerProxy* MmProxy;
    
public:
    UR5DataKeeperForClientGaas();

};


#pragma once
#include "CoreMinimal.h"
#include "ER5CoopProxyLoadingScreenState.generated.h"

UENUM(BlueprintType)
enum class ER5CoopProxyLoadingScreenState : uint8 {
    Init,
    WaitingForHostServer,
    HostServerWasFound,
    WaitingForLocalBLCoturns,
    WaitingForConnectVerification,
    ConnectVerified,
    WaitingForBLConnection,
    BLConnected,
    WaitingForUeConnection,
    Connected,
    Broken,
};


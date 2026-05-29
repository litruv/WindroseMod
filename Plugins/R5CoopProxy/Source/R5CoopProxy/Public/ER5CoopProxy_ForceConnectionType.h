#pragma once
#include "CoreMinimal.h"
#include "ER5CoopProxy_ForceConnectionType.generated.h"

UENUM(BlueprintType)
enum class ER5CoopProxy_ForceConnectionType : uint8 {
    TcpRelayOnly,
    UdpRelayOnly,
};


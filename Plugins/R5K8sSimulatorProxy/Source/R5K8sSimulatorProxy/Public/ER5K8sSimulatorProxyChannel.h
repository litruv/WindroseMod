#pragma once
#include "CoreMinimal.h"
#include "ER5K8sSimulatorProxyChannel.generated.h"

UENUM(BlueprintType)
enum class ER5K8sSimulatorProxyChannel : uint8 {
    K8s,
    gRPC,
};


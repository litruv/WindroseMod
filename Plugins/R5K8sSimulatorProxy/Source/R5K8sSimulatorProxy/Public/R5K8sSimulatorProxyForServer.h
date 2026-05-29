#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "Subsystems/GameInstanceSubsystem.h"
#include "R5K8sSimulatorProxyForServer.generated.h"

UCLASS(Blueprintable)
class R5K8SSIMULATORPROXY_API UR5K8sSimulatorProxyForServer : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UR5K8sSimulatorProxyForServer();

};


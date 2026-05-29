#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "Subsystems/GameInstanceSubsystem.h"
#include "R5EosProxySystem.generated.h"

UCLASS(Blueprintable)
class R5EOSPROXY_API UR5EosProxySystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UR5EosProxySystem();

};


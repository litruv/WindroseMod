#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "Subsystems/GameInstanceSubsystem.h"
#include "R5CoopProxy.generated.h"

UCLASS(Blueprintable)
class R5COOPPROXY_API UR5CoopProxy : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UR5CoopProxy();

};


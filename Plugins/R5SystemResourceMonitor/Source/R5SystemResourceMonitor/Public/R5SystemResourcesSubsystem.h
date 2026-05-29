#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "Subsystems/EngineSubsystem.h"
#include "R5SystemResourcesSubsystem.generated.h"

UCLASS(Blueprintable)
class UR5SystemResourcesSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UR5SystemResourcesSubsystem();

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "Subsystems/GameInstanceSubsystem.h"
#include "R5CheckMonitorScheduler.generated.h"

UCLASS(Blueprintable)
class UR5CheckMonitorScheduler : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UR5CheckMonitorScheduler();

};


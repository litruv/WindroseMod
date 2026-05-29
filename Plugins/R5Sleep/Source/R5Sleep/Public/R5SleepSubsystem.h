#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5SleepSubsystem.generated.h"

UCLASS(Blueprintable)
class R5SLEEP_API UR5SleepSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UR5SleepSubsystem();

};


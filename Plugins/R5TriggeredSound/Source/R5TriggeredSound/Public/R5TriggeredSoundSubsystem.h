#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5TriggeredSoundSubsystem.generated.h"

UCLASS(Blueprintable)
class R5TRIGGEREDSOUND_API UR5TriggeredSoundSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UR5TriggeredSoundSubsystem();

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActiveSoundUpdateInterface -FallbackName=ActiveSoundUpdateInterface
#include "ActiveSoundUpdateInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioEngineSubsystem -FallbackName=AudioEngineSubsystem
#include "Subsystems/AudioEngineSubsystem.h"
#include "R5ActiveSoundUpdateSubsystem.generated.h"

UCLASS(Blueprintable)
class R5_API UR5ActiveSoundUpdateSubsystem : public UAudioEngineSubsystem, public IActiveSoundUpdateInterface {
    GENERATED_BODY()
public:
    UR5ActiveSoundUpdateSubsystem();


    // Fix for true pure virtual functions not being implemented
};


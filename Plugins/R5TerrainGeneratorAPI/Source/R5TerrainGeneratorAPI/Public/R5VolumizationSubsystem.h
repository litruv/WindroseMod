#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5VolumizationSubsystem.generated.h"

UCLASS(Blueprintable)
class R5TERRAINGENERATORAPI_API UR5VolumizationSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UR5VolumizationSubsystem();

};


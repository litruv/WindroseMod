#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5CaptureMapSubsystem.generated.h"

UCLASS(Blueprintable)
class R5_API UR5CaptureMapSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UR5CaptureMapSubsystem();

};


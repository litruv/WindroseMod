#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5GrassSubsystem.generated.h"

UCLASS(Blueprintable)
class R5GRASSGENERATOR_API UR5GrassSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UR5GrassSubsystem();

};


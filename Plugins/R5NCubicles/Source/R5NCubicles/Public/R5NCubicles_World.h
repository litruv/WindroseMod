#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5NCubicles_World.generated.h"

UCLASS(Blueprintable)
class UR5NCubicles_World : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UR5NCubicles_World();

};


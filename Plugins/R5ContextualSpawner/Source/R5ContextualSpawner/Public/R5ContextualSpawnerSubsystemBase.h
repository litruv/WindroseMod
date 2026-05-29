#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5ContextualSpawnerSubsystemBase.generated.h"

UCLASS(Abstract, Blueprintable)
class R5CONTEXTUALSPAWNER_API UR5ContextualSpawnerSubsystemBase : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UR5ContextualSpawnerSubsystemBase();

};


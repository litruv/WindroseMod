#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5ActorRegistratorSubsystem.generated.h"

UCLASS(Blueprintable)
class R5ACTORREGISTRATOR_API UR5ActorRegistratorSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UR5ActorRegistratorSubsystem();

};


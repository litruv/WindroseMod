#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5SystemResourcesWorldSubsystem.generated.h"

UCLASS(Blueprintable)
class UR5SystemResourcesWorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UR5SystemResourcesWorldSubsystem();

};


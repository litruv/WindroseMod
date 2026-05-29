#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5PointLightBalancerSubsystem.generated.h"

UCLASS(Blueprintable)
class R5POINTLIGHTBALANCER_API UR5PointLightBalancerSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UR5PointLightBalancerSubsystem();

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5ShipAimingDrawSystem.generated.h"

class ASplineMeshActor;

UCLASS(Blueprintable)
class R5_API UR5ShipAimingDrawSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASplineMeshActor* TrajectoryActor;
    
public:
    UR5ShipAimingDrawSystem();

};


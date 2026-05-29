#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5ShipProximitySubsystem.generated.h"

class UR5ShipProximitySettings;

UCLASS(Blueprintable)
class UR5ShipProximitySubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ShipProximitySettings* Settings;
    
public:
    UR5ShipProximitySubsystem();

};


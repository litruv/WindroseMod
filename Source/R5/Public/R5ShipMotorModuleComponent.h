#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Buoyancy -ObjectName=R5ShipMotorComponent -FallbackName=R5ShipMotorComponent
#include "R5ShipMotorComponent.h"
#include "R5ModuleEfficiencyInterface.h"
#include "R5ShipMotorModuleComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5ShipMotorModuleComponent : public UR5ShipMotorComponent, public IR5ModuleEfficiencyInterface {
    GENERATED_BODY()
public:
    UR5ShipMotorModuleComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};


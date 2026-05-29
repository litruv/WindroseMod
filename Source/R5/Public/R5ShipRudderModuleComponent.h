#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Buoyancy -ObjectName=R5ShipRudderComponent -FallbackName=R5ShipRudderComponent
#include "R5ShipRudderComponent.h"
#include "R5ModuleEfficiencyInterface.h"
#include "R5ShipRudderModuleComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5ShipRudderModuleComponent : public UR5ShipRudderComponent, public IR5ModuleEfficiencyInterface {
    GENERATED_BODY()
public:
    UR5ShipRudderModuleComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};


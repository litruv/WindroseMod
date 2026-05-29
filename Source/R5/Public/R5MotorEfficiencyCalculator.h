#pragma once
#include "CoreMinimal.h"
#include "R5ModuleEfficiencyCalculator.h"
#include "R5MotorEfficiencyCalculator.generated.h"

class UR5ShipMotorEfficiencyParams;

UCLASS(Blueprintable)
class R5_API UR5MotorEfficiencyCalculator : public UR5ModuleEfficiencyCalculator {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ShipMotorEfficiencyParams* CalculationParams;
    
public:
    UR5MotorEfficiencyCalculator();

};


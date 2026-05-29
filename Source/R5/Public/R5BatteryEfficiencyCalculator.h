#pragma once
#include "CoreMinimal.h"
#include "R5ModuleEfficiencyCalculator.h"
#include "R5BatteryEfficiencyCalculator.generated.h"

class UR5ShipBatteryEfficiencyParams;

UCLASS(Blueprintable)
class R5_API UR5BatteryEfficiencyCalculator : public UR5ModuleEfficiencyCalculator {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ShipBatteryEfficiencyParams* CalculationParams;
    
public:
    UR5BatteryEfficiencyCalculator();

};


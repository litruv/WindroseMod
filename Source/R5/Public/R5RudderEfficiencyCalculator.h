#pragma once
#include "CoreMinimal.h"
#include "R5ModuleEfficiencyCalculator.h"
#include "R5RudderEfficiencyCalculator.generated.h"

class UR5ShipRudderEfficiencyParams;

UCLASS(Blueprintable)
class R5_API UR5RudderEfficiencyCalculator : public UR5ModuleEfficiencyCalculator {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ShipRudderEfficiencyParams* CalculationParams;
    
public:
    UR5RudderEfficiencyCalculator();

};


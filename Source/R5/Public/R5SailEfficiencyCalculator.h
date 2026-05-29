#pragma once
#include "CoreMinimal.h"
#include "R5ModuleEfficiencyCalculator.h"
#include "R5SailEfficiencyCalculator.generated.h"

class UR5ShipSailEfficiencyParams;

UCLASS(Blueprintable)
class R5_API UR5SailEfficiencyCalculator : public UR5ModuleEfficiencyCalculator {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ShipSailEfficiencyParams* CalculationParams;
    
public:
    UR5SailEfficiencyCalculator();

};


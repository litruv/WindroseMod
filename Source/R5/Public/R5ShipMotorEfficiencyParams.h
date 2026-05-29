#pragma once
#include "CoreMinimal.h"
#include "R5ModuleEfficiencyParams.h"
#include "R5ShipMotorEfficiencySettings.h"
#include "R5ShipMotorEfficiencyParams.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UR5ShipMotorEfficiencyParams : public UR5ModuleEfficiencyParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ShipMotorEfficiencySettings Settings;
    
    UR5ShipMotorEfficiencyParams();

};


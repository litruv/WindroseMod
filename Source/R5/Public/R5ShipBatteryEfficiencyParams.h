#pragma once
#include "CoreMinimal.h"
#include "R5ModuleEfficiencyParams.h"
#include "R5ShipBatteryEfficiencySettings.h"
#include "R5ShipBatteryEfficiencyParams.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UR5ShipBatteryEfficiencyParams : public UR5ModuleEfficiencyParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ShipBatteryEfficiencySettings Settings;
    
    UR5ShipBatteryEfficiencyParams();

};


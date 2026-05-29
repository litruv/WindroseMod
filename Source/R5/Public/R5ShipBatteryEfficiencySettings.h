#pragma once
#include "CoreMinimal.h"
#include "R5BaseModuleData.h"
#include "R5ShipBatteryEfficiencySettings.generated.h"

USTRUCT(BlueprintType)
struct FR5ShipBatteryEfficiencySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BaseModuleData CooldownSettings;
    
    R5_API FR5ShipBatteryEfficiencySettings();
};


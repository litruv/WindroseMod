#pragma once
#include "CoreMinimal.h"
#include "R5BaseModuleData.h"
#include "R5ShipMotorEfficiencySettings.generated.h"

USTRUCT(BlueprintType)
struct FR5ShipMotorEfficiencySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BaseModuleData PowerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BaseModuleData GearSettings;
    
    R5_API FR5ShipMotorEfficiencySettings();
};


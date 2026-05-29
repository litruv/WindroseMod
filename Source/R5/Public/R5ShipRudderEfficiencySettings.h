#pragma once
#include "CoreMinimal.h"
#include "R5BaseModuleData.h"
#include "R5ShipRudderEfficiencySettings.generated.h"

USTRUCT(BlueprintType)
struct FR5ShipRudderEfficiencySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BaseModuleData RadiusSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BaseModuleData SpeedSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BaseModuleData IntervalSettings;
    
    R5_API FR5ShipRudderEfficiencySettings();
};


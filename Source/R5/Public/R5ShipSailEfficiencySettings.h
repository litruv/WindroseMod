#pragma once
#include "CoreMinimal.h"
#include "R5BaseModuleData.h"
#include "R5ShipSailEfficiencySettings.generated.h"

USTRUCT(BlueprintType)
struct FR5ShipSailEfficiencySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BaseModuleData RadiusSettings;
    
    R5_API FR5ShipSailEfficiencySettings();
};


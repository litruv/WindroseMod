#pragma once
#include "CoreMinimal.h"
#include "ER5ShipModuleEfficiencyCalculatingAlgo.h"
#include "R5BaseModuleData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FR5BaseModuleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CurveSettings;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5ShipModuleEfficiencyCalculatingAlgo CalculatingAlgo;
    
    R5_API FR5BaseModuleData();
};


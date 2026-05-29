#pragma once
#include "CoreMinimal.h"
#include "R5ModuleEfficiencyParams.h"
#include "R5ShipRudderEfficiencySettings.h"
#include "R5ShipRudderEfficiencyParams.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UR5ShipRudderEfficiencyParams : public UR5ModuleEfficiencyParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ShipRudderEfficiencySettings Settings;
    
    UR5ShipRudderEfficiencyParams();

};


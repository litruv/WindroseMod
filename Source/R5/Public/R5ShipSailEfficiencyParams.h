#pragma once
#include "CoreMinimal.h"
#include "R5ModuleEfficiencyParams.h"
#include "R5ShipSailEfficiencySettings.h"
#include "R5ShipSailEfficiencyParams.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UR5ShipSailEfficiencyParams : public UR5ModuleEfficiencyParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ShipSailEfficiencySettings Settings;
    
    UR5ShipSailEfficiencyParams();

};


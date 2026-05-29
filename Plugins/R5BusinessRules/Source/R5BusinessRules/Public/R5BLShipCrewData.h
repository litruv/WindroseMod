#pragma once
#include "CoreMinimal.h"
#include "R5BLScenarioSave_Crew.h"
#include "R5BLShipCrewData.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLShipCrewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLScenarioSave_Crew CrewHeadcountDefault;
    
    FR5BLShipCrewData();
};


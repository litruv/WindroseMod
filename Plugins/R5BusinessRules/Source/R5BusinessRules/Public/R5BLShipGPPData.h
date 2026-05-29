#pragma once
#include "CoreMinimal.h"
#include "R5BLShipCrewData.h"
#include "R5BLShipNameData.h"
#include "R5BLShipGPPData.generated.h"

class AActor;
class UR5BLShipServiceParams;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLShipGPPData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLShipNameData ShipNameData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ShipClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLShipCrewData ShipCrew;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLShipServiceParams> ServiceParams;
    
    FR5BLShipGPPData();
};


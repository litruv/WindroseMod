#pragma once
#include "CoreMinimal.h"
#include "R5BLShipStatsData.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLShipStatsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText StatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText StatValue;
    
    FR5BLShipStatsData();
};


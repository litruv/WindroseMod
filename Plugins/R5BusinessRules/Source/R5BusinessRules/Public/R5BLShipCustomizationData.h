#pragma once
#include "CoreMinimal.h"
#include "R5BLShipCustomizationGroupData.h"
#include "R5BLShipCustomizationData.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLShipCustomizationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLShipCustomizationGroupData> CustomizationGroups;
    
    FR5BLShipCustomizationData();
};


#pragma once
#include "CoreMinimal.h"
#include "R5BLShipNameData.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLShipNameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ShipDefaultName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinNameSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNameSize;
    
    FR5BLShipNameData();
};


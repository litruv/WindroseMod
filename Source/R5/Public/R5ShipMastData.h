#pragma once
#include "CoreMinimal.h"
#include "R5ShipMastRotation.h"
#include "R5ShipMastData.generated.h"

USTRUCT(BlueprintType)
struct FR5ShipMastData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FR5ShipMastRotation> Masts;
    
    R5_API FR5ShipMastData();
};


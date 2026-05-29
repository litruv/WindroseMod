#pragma once
#include "CoreMinimal.h"
#include "ER5ShipHullDamageCPDIndex.h"
#include "R5ShipDamageCPD.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FR5ShipDamageCPD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ER5ShipHullDamageCPDIndex, UCurveFloat*> CPDMap;
    
    R5_API FR5ShipDamageCPD();
};


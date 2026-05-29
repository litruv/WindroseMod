#pragma once
#include "CoreMinimal.h"
#include "ER5ShipHullCPDIndex.h"
#include "R5ShipHullCustomPrimitiveData.generated.h"

USTRUCT(BlueprintType)
struct FR5ShipHullCustomPrimitiveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ER5ShipHullCPDIndex, float> CPDMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ComponentTags;
    
    R5_API FR5ShipHullCustomPrimitiveData();
};


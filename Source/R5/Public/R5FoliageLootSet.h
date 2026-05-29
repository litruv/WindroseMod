#pragma once
#include "CoreMinimal.h"
#include "R5FoliageLootData.h"
#include "R5FoliageLootSet.generated.h"

USTRUCT(BlueprintType)
struct FR5FoliageLootSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5FoliageLootData> Items;
    
    R5_API FR5FoliageLootSet();
};


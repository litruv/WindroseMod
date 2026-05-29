#pragma once
#include "CoreMinimal.h"
#include "R5BLItem.h"
#include "R5BLItemsStackData.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLItemsStackData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLItem Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FR5BLItemsStackData();
};


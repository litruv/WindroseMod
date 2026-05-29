#pragma once
#include "CoreMinimal.h"
#include "R5BLItem_V0_8_0.h"
#include "R5BLItemsStackData_V0_8_0.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLItemsStackData_V0_8_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLItem_V0_8_0 Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FR5BLItemsStackData_V0_8_0();
};


#pragma once
#include "CoreMinimal.h"
#include "R5BLItem_V0_8_0.h"
#include "R5BLTouchedItemInfo_V0_8_0.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLTouchedItemInfo_V0_8_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLItem_V0_8_0 Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNew;
    
    FR5BLTouchedItemInfo_V0_8_0();
};


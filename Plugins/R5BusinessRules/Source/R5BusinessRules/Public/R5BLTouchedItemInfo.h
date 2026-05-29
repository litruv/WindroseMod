#pragma once
#include "CoreMinimal.h"
#include "R5BLItem.h"
#include "R5BLTouchedItemInfo.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLTouchedItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLItem Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNew;
    
    FR5BLTouchedItemInfo();
};


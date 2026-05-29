#pragma once
#include "CoreMinimal.h"
#include "R5BLCheat_LogDataCache.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLCheat_LogDataCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString modelName;
    
    FR5BLCheat_LogDataCache();
};


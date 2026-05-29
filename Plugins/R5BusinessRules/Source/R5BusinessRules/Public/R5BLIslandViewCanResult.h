#pragma once
#include "CoreMinimal.h"
#include "R5BLIslandViewCanResult.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLIslandViewCanResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugMessage;
    
    FR5BLIslandViewCanResult();
};


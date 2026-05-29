#pragma once
#include "CoreMinimal.h"
#include "R5BLRecordPathPart.generated.h"

USTRUCT(BlueprintType)
struct R5BLCOMMON_API FR5BLRecordPathPart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    FR5BLRecordPathPart();
};


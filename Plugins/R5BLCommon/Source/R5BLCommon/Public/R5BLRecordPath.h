#pragma once
#include "CoreMinimal.h"
#include "R5BLRecordPathPart.h"
#include "R5BLRecordPath.generated.h"

USTRUCT(BlueprintType)
struct R5BLCOMMON_API FR5BLRecordPath {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLRecordPathPart> Path;
    
public:
    FR5BLRecordPath();
};


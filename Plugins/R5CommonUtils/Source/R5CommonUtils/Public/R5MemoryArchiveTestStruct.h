#pragma once
#include "CoreMinimal.h"
#include "R5MemoryArchiveTestSubStruct.h"
#include "R5MemoryArchiveTestStruct.generated.h"

USTRUCT(BlueprintType)
struct FR5MemoryArchiveTestStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Ints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5MemoryArchiveTestSubStruct SubStruct;
    
    R5COMMONUTILS_API FR5MemoryArchiveTestStruct();
};


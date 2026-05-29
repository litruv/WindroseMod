#pragma once
#include "CoreMinimal.h"
#include "R5MemoryArchiveTestSubStruct.generated.h"

USTRUCT(BlueprintType)
struct FR5MemoryArchiveTestSubStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    R5COMMONUTILS_API FR5MemoryArchiveTestSubStruct();
};


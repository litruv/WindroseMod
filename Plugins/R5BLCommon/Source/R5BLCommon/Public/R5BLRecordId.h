#pragma once
#include "CoreMinimal.h"
#include "R5BLRecordId.generated.h"

USTRUCT(BlueprintType)
struct R5BLCOMMON_API FR5BLRecordId {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
public:
    FR5BLRecordId();
};
FORCEINLINE uint32 GetTypeHash(const FR5BLRecordId) { return 0; }


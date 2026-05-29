#pragma once
#include "CoreMinimal.h"
#include "R5AIMobHandle.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5AIMobHandle {
    GENERATED_BODY()
public:
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 UniqueID;
    
public:
    FR5AIMobHandle();
};
FORCEINLINE uint32 GetTypeHash(const FR5AIMobHandle) { return 0; }


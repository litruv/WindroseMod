#pragma once
#include "CoreMinimal.h"
#include "R5AS_MemoryValueSetterByKeyCommon.h"
#include "R5AS_UObjectMemoryKey.h"
#include "R5AS_UObjectMemoryValueSetterByKey.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct R5AGENTSYSTEM_API FR5AS_UObjectMemoryValueSetterByKey : public FR5AS_MemoryValueSetterByKeyCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AS_UObjectMemoryKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Value;
    
    FR5AS_UObjectMemoryValueSetterByKey();
};


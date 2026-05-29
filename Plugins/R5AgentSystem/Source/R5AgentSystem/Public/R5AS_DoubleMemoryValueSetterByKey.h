#pragma once
#include "CoreMinimal.h"
#include "R5AS_DoubleMemoryKey.h"
#include "R5AS_MemoryValueSetterByKeyCommon.h"
#include "R5AS_DoubleMemoryValueSetterByKey.generated.h"

USTRUCT(BlueprintType)
struct R5AGENTSYSTEM_API FR5AS_DoubleMemoryValueSetterByKey : public FR5AS_MemoryValueSetterByKeyCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AS_DoubleMemoryKey Key;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Value;
    
    FR5AS_DoubleMemoryValueSetterByKey();
};


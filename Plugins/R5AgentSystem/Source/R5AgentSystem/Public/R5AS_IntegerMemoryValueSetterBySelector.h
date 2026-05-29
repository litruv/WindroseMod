#pragma once
#include "CoreMinimal.h"
#include "R5AS_IntegerValueSelector.h"
#include "R5AS_MemoryValueSetterBySelectorCommon.h"
#include "R5AS_IntegerMemoryValueSetterBySelector.generated.h"

USTRUCT(BlueprintType)
struct R5AGENTSYSTEM_API FR5AS_IntegerMemoryValueSetterBySelector : public FR5AS_MemoryValueSetterBySelectorCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AS_IntegerValueSelector Selector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    FR5AS_IntegerMemoryValueSetterBySelector();
};


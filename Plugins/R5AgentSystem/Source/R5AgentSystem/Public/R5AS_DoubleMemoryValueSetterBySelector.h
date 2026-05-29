#pragma once
#include "CoreMinimal.h"
#include "R5AS_DoubleValueSelector.h"
#include "R5AS_MemoryValueSetterBySelectorCommon.h"
#include "R5AS_DoubleMemoryValueSetterBySelector.generated.h"

USTRUCT(BlueprintType)
struct R5AGENTSYSTEM_API FR5AS_DoubleMemoryValueSetterBySelector : public FR5AS_MemoryValueSetterBySelectorCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AS_DoubleValueSelector Selector;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Value;
    
    FR5AS_DoubleMemoryValueSetterBySelector();
};


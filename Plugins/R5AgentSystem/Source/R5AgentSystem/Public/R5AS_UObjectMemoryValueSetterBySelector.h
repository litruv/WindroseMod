#pragma once
#include "CoreMinimal.h"
#include "R5AS_MemoryValueSetterBySelectorCommon.h"
#include "R5AS_UObjectValueSelector.h"
#include "R5AS_UObjectMemoryValueSetterBySelector.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct R5AGENTSYSTEM_API FR5AS_UObjectMemoryValueSetterBySelector : public FR5AS_MemoryValueSetterBySelectorCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AS_UObjectValueSelector Selector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Value;
    
    FR5AS_UObjectMemoryValueSetterBySelector();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Math/Transform.h"
#include "R5AS_MemoryValueSetterBySelectorCommon.h"
#include "R5AS_TransformValueSelector.h"
#include "R5AS_TransformMemoryValueSetterBySelector.generated.h"

USTRUCT(BlueprintType)
struct R5AGENTSYSTEM_API FR5AS_TransformMemoryValueSetterBySelector : public FR5AS_MemoryValueSetterBySelectorCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AS_TransformValueSelector Selector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Value;
    
    FR5AS_TransformMemoryValueSetterBySelector();
};


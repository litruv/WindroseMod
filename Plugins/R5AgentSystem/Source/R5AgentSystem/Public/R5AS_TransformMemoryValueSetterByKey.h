#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Math/Transform.h"
#include "R5AS_MemoryValueSetterByKeyCommon.h"
#include "R5AS_TransformMemoryKey.h"
#include "R5AS_TransformMemoryValueSetterByKey.generated.h"

USTRUCT(BlueprintType)
struct R5AGENTSYSTEM_API FR5AS_TransformMemoryValueSetterByKey : public FR5AS_MemoryValueSetterByKeyCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AS_TransformMemoryKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Value;
    
    FR5AS_TransformMemoryValueSetterByKey();
};


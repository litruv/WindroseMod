#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
#include "R5AS_MemoryValueSetterByKeyCommon.h"
#include "R5AS_VectorMemoryKey.h"
#include "R5AS_VectorMemoryValueSetterByKey.generated.h"

USTRUCT(BlueprintType)
struct R5AGENTSYSTEM_API FR5AS_VectorMemoryValueSetterByKey : public FR5AS_MemoryValueSetterByKeyCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AS_VectorMemoryKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Value;
    
    FR5AS_VectorMemoryValueSetterByKey();
};


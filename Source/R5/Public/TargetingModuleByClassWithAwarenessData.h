#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5AgentSystem -ObjectName=ER5AS_AwarenessType -FallbackName=ER5AS_AwarenessType
#include "ER5AS_AwarenessType.h"
#include "TargetingModuleByClassWithAwarenessData.generated.h"

USTRUCT(BlueprintType)
struct FTargetingModuleByClassWithAwarenessData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5AS_AwarenessType AwarenessType;
    
    R5_API FTargetingModuleByClassWithAwarenessData();
};


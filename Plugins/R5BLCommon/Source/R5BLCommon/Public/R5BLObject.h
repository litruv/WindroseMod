#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5JsonAssets -ObjectName=R5JsonRuntimePDA -FallbackName=R5JsonRuntimePDA
#include "R5JsonRuntimePDA.h"
#include "R5BLObject.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class R5BLCOMMON_API UR5BLObject : public UR5JsonRuntimePDA {
    GENERATED_BODY()
public:
    UR5BLObject();

};


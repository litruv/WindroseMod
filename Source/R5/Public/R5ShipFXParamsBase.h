#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5JsonAssets -ObjectName=R5JsonRuntimeDA -FallbackName=R5JsonRuntimeDA
#include "R5JsonRuntimeDA.h"
#include "R5ShipFXParamsBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class R5_API UR5ShipFXParamsBase : public UR5JsonRuntimeDA {
    GENERATED_BODY()
public:
    UR5ShipFXParamsBase();

};


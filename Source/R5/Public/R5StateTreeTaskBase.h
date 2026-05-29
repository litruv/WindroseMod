#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=StateTreeModule -ObjectName=StateTreeTaskCommonBase -FallbackName=StateTreeTaskCommonBase
#include "StateTreeTaskBase.h"
#include "R5StateTreeTaskBase.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5StateTreeTaskBase : public FStateTreeTaskCommonBase {
    GENERATED_BODY()
public:
    FR5StateTreeTaskBase();
};


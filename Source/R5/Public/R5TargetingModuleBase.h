#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5TargetingModuleBase.generated.h"

UCLASS(Abstract, Blueprintable)
class R5_API UR5TargetingModuleBase : public UObject {
    GENERATED_BODY()
public:
    UR5TargetingModuleBase();

};


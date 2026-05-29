#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5TargetingFilterBase.generated.h"

UCLASS(Abstract, Blueprintable)
class R5_API UR5TargetingFilterBase : public UObject {
    GENERATED_BODY()
public:
    UR5TargetingFilterBase();

};


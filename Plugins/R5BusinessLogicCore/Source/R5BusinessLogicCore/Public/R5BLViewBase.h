#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5BLViewBase.generated.h"

UCLASS(Abstract, Blueprintable)
class R5BUSINESSLOGICCORE_API UR5BLViewBase : public UObject {
    GENERATED_BODY()
public:
    UR5BLViewBase();

};


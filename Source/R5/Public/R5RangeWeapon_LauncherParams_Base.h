#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5RangeWeapon_LauncherParams_Base.generated.h"

UCLASS(Abstract, Blueprintable)
class R5_API UR5RangeWeapon_LauncherParams_Base : public UObject {
    GENERATED_BODY()
public:
    UR5RangeWeapon_LauncherParams_Base();

};


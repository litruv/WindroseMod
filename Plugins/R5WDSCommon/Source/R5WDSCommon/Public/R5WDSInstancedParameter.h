#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5WDSInstancedParameter.generated.h"

UCLASS(Blueprintable, DefaultToInstanced)
class R5WDSCOMMON_API UR5WDSInstancedParameter : public UObject {
    GENERATED_BODY()
public:
    UR5WDSInstancedParameter();

};


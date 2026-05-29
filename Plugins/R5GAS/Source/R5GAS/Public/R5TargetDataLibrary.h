#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
#include "R5TargetDataLibrary.generated.h"

UCLASS(Abstract, Blueprintable)
class R5GAS_API UR5TargetDataLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UR5TargetDataLibrary();

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
#include "R5ShipMovementUtils.generated.h"

UCLASS(Blueprintable)
class R5_API UR5ShipMovementUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UR5ShipMovementUtils();

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
#include "R5JsonConverter.generated.h"

UCLASS(Blueprintable)
class R5JSONASSETS_API UR5JsonConverter : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UR5JsonConverter();

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5GameplaySpawnerVariantCustomData.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UR5GameplaySpawnerVariantCustomData : public UObject {
    GENERATED_BODY()
public:
    UR5GameplaySpawnerVariantCustomData();

};


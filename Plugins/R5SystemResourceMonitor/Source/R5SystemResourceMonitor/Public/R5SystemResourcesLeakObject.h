#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5SystemResourcesLeakObject.generated.h"

UCLASS(Blueprintable)
class R5SYSTEMRESOURCEMONITOR_API UR5SystemResourcesLeakObject : public UObject {
    GENERATED_BODY()
public:
    UR5SystemResourcesLeakObject();

};


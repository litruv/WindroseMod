#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext -FallbackName=EnvQueryContext
#include "EnvironmentQuery/EnvQueryContext.h"
#include "R5EnvQueryContext_OceanDeepPoints.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5EnvQueryContext_OceanDeepPoints : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UR5EnvQueryContext_OceanDeepPoints();

};


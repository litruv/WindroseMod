#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext -FallbackName=EnvQueryContext
#include "EnvironmentQuery/EnvQueryContext.h"
#include "R5EnvQueryContext_AvoidedAggressiveActors.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5EnvQueryContext_AvoidedAggressiveActors : public UEnvQueryContext {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchRadius;
    
public:
    UR5EnvQueryContext_AvoidedAggressiveActors();

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryGenerator -FallbackName=EnvQueryGenerator
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "R5EnvTraceData.h"
#include "R5EnvQueryGenerator_ProjectedPoints.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UR5EnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5EnvTraceData ProjectionData;
    
    UR5EnvQueryGenerator_ProjectedPoints();

};


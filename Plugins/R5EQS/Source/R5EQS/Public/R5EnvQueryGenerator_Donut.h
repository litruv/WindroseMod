#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIDataProviderFloatValue -FallbackName=AIDataProviderFloatValue
#include "DataProviders/AIDataProvider.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIDataProviderIntValue -FallbackName=AIDataProviderIntValue
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvDirection -FallbackName=EnvDirection
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "R5EnvQueryGenerator_ProjectedPoints.h"
#include "Templates/SubclassOf.h"
#include "R5EnvQueryGenerator_Donut.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UR5EnvQueryGenerator_Donut : public UR5EnvQueryGenerator_ProjectedPoints {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue InnerRadius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue OuterRadius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderIntValue NumberOfRings;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderIntValue PointsPerRing;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvDirection ArcDirection;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue ArcAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSpiralPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Center;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDefineArc: 1;
    
    UR5EnvQueryGenerator_Donut();

};


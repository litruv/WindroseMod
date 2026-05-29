#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIDataProviderFloatValue -FallbackName=AIDataProviderFloatValue
#include "DataProviders/AIDataProvider.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIDataProviderIntValue -FallbackName=AIDataProviderIntValue
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryGenerator -FallbackName=EnvQueryGenerator
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "EMercunaPointDistribution.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator_Mercuna_Sphere.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable, EditInlineNew)
class MERCUNA_API UEnvQueryGenerator_Mercuna_Sphere : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue InnerRadius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue OuterRadius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderIntValue NumberOfShells;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderIntValue PointsPerShell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMercunaPointDistribution Distribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Center;
    
    UEnvQueryGenerator_Mercuna_Sphere();

};


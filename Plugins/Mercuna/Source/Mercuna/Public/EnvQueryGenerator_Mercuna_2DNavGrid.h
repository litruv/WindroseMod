#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIDataProviderBoolValue -FallbackName=AIDataProviderBoolValue
#include "DataProviders/AIDataProvider.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIDataProviderFloatValue -FallbackName=AIDataProviderFloatValue
#include "DataProviders/AIDataProvider.h"
#include "Mercuna2DQueryGenerator.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator_Mercuna_2DNavGrid.generated.h"

class UEnvQueryContext;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MERCUNA_API UEnvQueryGenerator_Mercuna_2DNavGrid : public UMercuna2DQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue MaxDistance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderBoolValue MaxDistanceIsPathDistance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue SpaceBetween;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Centre;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderBoolValue AlignPointsToCenter;
    
    UEnvQueryGenerator_Mercuna_2DNavGrid();

};


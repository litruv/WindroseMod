#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIDataProviderFloatValue -FallbackName=AIDataProviderFloatValue
#include "DataProviders/AIDataProvider.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
#include "EnvironmentQuery/EnvQueryTest.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvTraceData -FallbackName=EnvTraceData
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "R5EnvQueryTest_WaterEncroachment.generated.h"

UCLASS(Blueprintable)
class R5_API UR5EnvQueryTest_WaterEncroachment : public UEnvQueryTest {
    GENERATED_BODY()
public:
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvTraceData TraceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOwnerYawRotation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue OverrideExtentX;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue OverrideExtentY;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue OverrideExtentZ;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue BlockerTraceUp;
    
public:
    UR5EnvQueryTest_WaterEncroachment();

};


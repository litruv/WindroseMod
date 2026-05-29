#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIDataProviderFloatValue -FallbackName=AIDataProviderFloatValue
#include "DataProviders/AIDataProvider.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest_Project -FallbackName=EnvQueryTest_Project
#include "EnvironmentQuery/Tests/EnvQueryTest_Project.h"
#include "R5EnvQueryTest_Project.generated.h"

UCLASS(Blueprintable)
class R5_API UR5EnvQueryTest_Project : public UEnvQueryTest_Project {
    GENERATED_BODY()
public:
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue OverrideExtentX;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue OverrideExtentY;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue OverrideExtentZ;
    
public:
    UR5EnvQueryTest_Project();

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
#include "EnvironmentQuery/EnvQueryTest.h"
#include "R5EnvQueryTest_DistanceToWater.generated.h"

UCLASS(Blueprintable)
class UR5EnvQueryTest_DistanceToWater : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UR5EnvQueryTest_DistanceToWater();

};


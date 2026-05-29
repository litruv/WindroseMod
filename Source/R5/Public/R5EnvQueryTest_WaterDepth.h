#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
#include "EnvironmentQuery/EnvQueryTest.h"
#include "R5EnvQueryTest_WaterDepth.generated.h"

UCLASS(Blueprintable)
class R5_API UR5EnvQueryTest_WaterDepth : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UR5EnvQueryTest_WaterDepth();

};


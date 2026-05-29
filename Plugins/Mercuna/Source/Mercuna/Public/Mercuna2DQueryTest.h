#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Mercuna2DQueryTest.generated.h"

UCLASS(Abstract, Blueprintable)
class MERCUNA_API UMercuna2DQueryTest : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UMercuna2DQueryTest();

};


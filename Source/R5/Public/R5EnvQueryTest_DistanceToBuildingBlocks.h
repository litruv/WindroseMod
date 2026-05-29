#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
#include "EnvironmentQuery/EnvQueryTest.h"
#include "R5EnvQueryTest_DistanceToBuildingBlocks.generated.h"

UCLASS(Blueprintable)
class UR5EnvQueryTest_DistanceToBuildingBlocks : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDistance2D;
    
    UR5EnvQueryTest_DistanceToBuildingBlocks();

};


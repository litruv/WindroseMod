#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
#include "EnvironmentQuery/EnvQueryTest.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
#include "R5EnvQueryTest_ProjectOnLandscape.generated.h"

UCLASS(Blueprintable)
class R5EQS_API UR5EnvQueryTest_ProjectOnLandscape : public UEnvQueryTest {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PostProjectionOffset;
    
public:
    UR5EnvQueryTest_ProjectOnLandscape();

};


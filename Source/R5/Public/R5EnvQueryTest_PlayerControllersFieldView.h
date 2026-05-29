#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
#include "EnvironmentQuery/EnvQueryTest.h"
#include "ER5PlayerControllersFilter.h"
#include "R5EnvQueryTest_PlayerControllersFieldView.generated.h"

UCLASS(Blueprintable)
class R5_API UR5EnvQueryTest_PlayerControllersFieldView : public UEnvQueryTest {
    GENERATED_BODY()
public:
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5PlayerControllersFilter PlayerControllersFilter;
    
public:
    UR5EnvQueryTest_PlayerControllersFieldView();

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5ScenarioBlackboard.generated.h"

class UR5BLScenarioSave_BlackboardView;
class UR5ScenarioWorldProxy;

UCLASS(Blueprintable)
class R5SCENARIO_API UR5ScenarioBlackboard : public UObject {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ScenarioWorldProxy* WorldProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5BLScenarioSave_BlackboardView* BlackboardView;
    
public:
    UR5ScenarioBlackboard();

};


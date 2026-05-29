#pragma once
#include "CoreMinimal.h"
#include "R5ScenarioBlackboardDefaults_Variable.h"
#include "R5ScenarioBlackboardDefaults.generated.h"

USTRUCT(BlueprintType)
struct R5SCENARIO_API FR5ScenarioBlackboardDefaults {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5ScenarioBlackboardDefaults_Variable> Variables;
    
    FR5ScenarioBlackboardDefaults();
};


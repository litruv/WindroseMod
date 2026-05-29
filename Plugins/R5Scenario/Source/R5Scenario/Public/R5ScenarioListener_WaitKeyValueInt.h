#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "ER5ScenarioMathComparison.h"
#include "R5ScenarioListener_BlackboardBase.h"
#include "R5ScenarioListener_WaitKeyValueInt.generated.h"

UCLASS(Blueprintable)
class R5SCENARIO_API UR5ScenarioListener_WaitKeyValueInt : public UR5ScenarioListener_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5ScenarioMathComparison ComparisonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UR5ScenarioListener_WaitKeyValueInt();

};


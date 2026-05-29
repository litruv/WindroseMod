#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5ScenarioListener_BlackboardBase.h"
#include "R5ScenarioListener_WaitKeyValueChanged.generated.h"

UCLASS(Blueprintable)
class R5SCENARIO_API UR5ScenarioListener_WaitKeyValueChanged : public UR5ScenarioListener_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Key;
    
    UR5ScenarioListener_WaitKeyValueChanged();

};


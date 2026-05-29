#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "R5ScenarioListener_BlackboardBase.h"
#include "R5ScenarioListener_WaitKeyBool.generated.h"

UCLASS(Blueprintable)
class R5SCENARIO_API UR5ScenarioListener_WaitKeyBool : public UR5ScenarioListener_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MatchAllFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReverseFlags;
    
    UR5ScenarioListener_WaitKeyBool();

};


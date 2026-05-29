#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioGraphNodeUI -FallbackName=R5ScenarioGraphNodeUI
#include "R5ScenarioGraphNodeUI.h"
#include "R5ScenarioUI_ShowHiring.generated.h"

class UR5NPCParams;

UCLASS(Blueprintable)
class R5_API UR5ScenarioUI_ShowHiring : public UR5ScenarioGraphNodeUI {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5NPCParams> Params;
    
public:
    UR5ScenarioUI_ShowHiring();

};


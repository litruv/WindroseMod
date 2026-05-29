#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioGraphNodeDialog -FallbackName=R5ScenarioGraphNodeDialog
#include "R5ScenarioGraphNodeDialog.h"
#include "R5ScenarioDialog_TextSelector.generated.h"

UCLASS(Blueprintable)
class R5_API UR5ScenarioDialog_TextSelector : public UR5ScenarioGraphNodeDialog {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UR5ScenarioDialog_TextSelector();

};


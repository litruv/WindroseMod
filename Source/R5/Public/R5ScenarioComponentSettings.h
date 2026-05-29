#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioSettings -FallbackName=R5ScenarioSettings
#include "R5ScenarioSettings.h"
#include "ER5SignificanceLevel.h"
#include "R5ScenarioComponentSettings.generated.h"

UCLASS(Blueprintable, NonTransient)
class R5_API UR5ScenarioComponentSettings : public UR5ScenarioSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5SignificanceLevel SignificanceLevel;
    
    UR5ScenarioComponentSettings();

};


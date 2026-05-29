#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessLogicCore -ObjectName=R5BLViewBase -FallbackName=R5BLViewBase
#include "R5BLViewBase.h"
#include "R5BLScenarioSave_BlackboardView.generated.h"

UCLASS(Blueprintable)
class R5BUSINESSRULES_API UR5BLScenarioSave_BlackboardView : public UR5BLViewBase {
    GENERATED_BODY()
public:
    UR5BLScenarioSave_BlackboardView();

};


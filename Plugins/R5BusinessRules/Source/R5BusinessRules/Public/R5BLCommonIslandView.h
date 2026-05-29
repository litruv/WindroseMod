#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessLogicCore -ObjectName=R5BLViewBase -FallbackName=R5BLViewBase
#include "R5BLViewBase.h"
#include "R5BLCommonIslandView.generated.h"

UCLASS(Blueprintable)
class R5BUSINESSRULES_API UR5BLCommonIslandView : public UR5BLViewBase {
    GENERATED_BODY()
public:
    UR5BLCommonIslandView();

};


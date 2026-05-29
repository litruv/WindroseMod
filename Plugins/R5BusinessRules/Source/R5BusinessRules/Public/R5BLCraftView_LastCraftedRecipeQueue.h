#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessLogicCore -ObjectName=R5BLViewBase -FallbackName=R5BLViewBase
#include "R5BLViewBase.h"
#include "R5BLCraftView_LastCraftedRecipeQueue.generated.h"

UCLASS(Blueprintable)
class R5BUSINESSRULES_API UR5BLCraftView_LastCraftedRecipeQueue : public UR5BLViewBase {
    GENERATED_BODY()
public:
    UR5BLCraftView_LastCraftedRecipeQueue();

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessLogicCore -ObjectName=R5BLViewBase -FallbackName=R5BLViewBase
#include "R5BLViewBase.h"
#include "R5BLPersonalInventoriesView_PersonalInventories.generated.h"

UCLASS(Blueprintable)
class R5BUSINESSRULES_API UR5BLPersonalInventoriesView_PersonalInventories : public UR5BLViewBase {
    GENERATED_BODY()
public:
    UR5BLPersonalInventoriesView_PersonalInventories();

};


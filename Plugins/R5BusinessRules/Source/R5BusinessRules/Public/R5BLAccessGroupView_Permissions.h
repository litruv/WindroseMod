#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessLogicCore -ObjectName=R5BLViewBase -FallbackName=R5BLViewBase
#include "R5BLViewBase.h"
#include "R5BLAccessGroupView_Permissions.generated.h"

UCLASS(Blueprintable)
class R5BUSINESSRULES_API UR5BLAccessGroupView_Permissions : public UR5BLViewBase {
    GENERATED_BODY()
public:
    UR5BLAccessGroupView_Permissions();

};


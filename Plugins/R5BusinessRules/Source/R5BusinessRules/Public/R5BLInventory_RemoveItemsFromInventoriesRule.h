#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ViewControllers -ObjectName=R5BLBusinessRuleBaseUe -FallbackName=R5BLBusinessRuleBaseUe
#include "R5BLBusinessRuleBaseUe.h"
#include "R5BLInventory_RemoveItemsFromInventoriesRule.generated.h"

UCLASS(Blueprintable)
class R5BUSINESSRULES_API UR5BLInventory_RemoveItemsFromInventoriesRule : public UR5BLBusinessRuleBaseUe {
    GENERATED_BODY()
public:
    UR5BLInventory_RemoveItemsFromInventoriesRule();

};


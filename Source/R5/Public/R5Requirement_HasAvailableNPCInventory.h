#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Requirement -ObjectName=R5Requirement_CommonBase -FallbackName=R5Requirement_CommonBase
#include "R5Requirement_CommonBase.h"
#include "R5Requirement_HasAvailableNPCInventory.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5_API UR5Requirement_HasAvailableNPCInventory : public UR5Requirement_CommonBase {
    GENERATED_BODY()
public:
    UR5Requirement_HasAvailableNPCInventory();

};


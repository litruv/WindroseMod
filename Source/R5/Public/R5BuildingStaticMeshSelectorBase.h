#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5BuildingStaticMeshSelectorBase.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew, HideDropdown)
class UR5BuildingStaticMeshSelectorBase : public UObject {
    GENERATED_BODY()
public:
    UR5BuildingStaticMeshSelectorBase();

};


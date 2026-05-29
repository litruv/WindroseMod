#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5Building_SnapPrimitiveBase.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew, HideDropdown)
class R5_API UR5Building_SnapPrimitiveBase : public UObject {
    GENERATED_BODY()
public:
    UR5Building_SnapPrimitiveBase();

};


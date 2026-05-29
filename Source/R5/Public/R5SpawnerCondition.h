#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5SpawnerCondition.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class R5_API UR5SpawnerCondition : public UObject {
    GENERATED_BODY()
public:
    UR5SpawnerCondition();

};


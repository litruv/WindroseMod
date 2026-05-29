#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5SpawnerMutator.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class R5_API UR5SpawnerMutator : public UObject {
    GENERATED_BODY()
public:
    UR5SpawnerMutator();

};


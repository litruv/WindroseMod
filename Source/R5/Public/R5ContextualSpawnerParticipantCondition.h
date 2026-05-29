#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5ContextualSpawnerParticipantCondition.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class R5_API UR5ContextualSpawnerParticipantCondition : public UObject {
    GENERATED_BODY()
public:
    UR5ContextualSpawnerParticipantCondition();

};


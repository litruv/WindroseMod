#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5EncounterAction.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class R5_API UR5EncounterAction : public UObject {
    GENERATED_BODY()
public:
    UR5EncounterAction();

};


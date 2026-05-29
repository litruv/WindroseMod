#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayCueNotify_Static -FallbackName=GameplayCueNotify_Static
#include "GameplayCueNotify_Static.h"
#include "R5GameplayCue_ShipCannon.generated.h"

UCLASS(Blueprintable)
class R5_API UR5GameplayCue_ShipCannon : public UGameplayCueNotify_Static {
    GENERATED_BODY()
public:
    UR5GameplayCue_ShipCannon();

};


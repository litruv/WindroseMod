#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5DrawWeaponTaskBase.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class R5_API UR5DrawWeaponTaskBase : public UObject {
    GENERATED_BODY()
public:
    UR5DrawWeaponTaskBase();

};


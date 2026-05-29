#pragma once
#include "CoreMinimal.h"
#include "R5EquipmentItemUI.h"
#include "R5MeleeWeaponItemUI.generated.h"

class UR5MeleeWeaponUIParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5MeleeWeaponItemUI : public UR5EquipmentItemUI {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MeleeWeaponUIParams* Params;
    
public:
    UR5MeleeWeaponItemUI(const FObjectInitializer& ObjectInitializer);

};


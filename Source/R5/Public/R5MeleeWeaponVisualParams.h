#pragma once
#include "CoreMinimal.h"
#include "R5EquipmentItemVisualParams.h"
#include "R5MeleeWeaponVisualData.h"
#include "R5MeleeWeaponVisualParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5MeleeWeaponVisualParams : public UR5EquipmentItemVisualParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5MeleeWeaponVisualData VisualData;
    
    UR5MeleeWeaponVisualParams();

};


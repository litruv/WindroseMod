#pragma once
#include "CoreMinimal.h"
#include "R5DrawWeaponAbilityGPData.h"
#include "R5EquipmentInputData.h"
#include "R5EquipmentItemLogicParams.h"
#include "R5MeleeWeaponLogicParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5MeleeWeaponLogicParams : public UR5EquipmentItemLogicParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5DrawWeaponAbilityGPData DrawWeaponAbilityGPData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5EquipmentInputData InputData;
    
    UR5MeleeWeaponLogicParams();

};


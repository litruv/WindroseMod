#pragma once
#include "CoreMinimal.h"
#include "R5EquipmentItemParams.h"
#include "R5MeleeWeaponParams.generated.h"

class UR5MeleeWeaponInputParams;
class UR5MeleeWeaponLogicParams;
class UR5MeleeWeaponSoundParams;
class UR5MeleeWeaponUIParams;
class UR5MeleeWeaponVisualParams;

UCLASS(Blueprintable)
class R5_API UR5MeleeWeaponParams : public UR5EquipmentItemParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MeleeWeaponLogicParams* Logic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MeleeWeaponVisualParams* Visual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MeleeWeaponSoundParams* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MeleeWeaponUIParams* UI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MeleeWeaponInputParams* Input;
    
    UR5MeleeWeaponParams();

};


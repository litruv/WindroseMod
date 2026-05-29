#pragma once
#include "CoreMinimal.h"
#include "R5DrawWeaponTaskBase.h"
#include "R5DrawWeaponTaskDualWieldModeData.h"
#include "R5DrawWeaponTaskDualWieldMode.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5DrawWeaponTaskDualWieldMode : public UR5DrawWeaponTaskBase {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5DrawWeaponTaskDualWieldModeData Data;
    
public:
    UR5DrawWeaponTaskDualWieldMode();

};


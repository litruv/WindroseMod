#pragma once
#include "CoreMinimal.h"
#include "R5DrawWeaponAbilityGPData.h"
#include "R5EquipmentInputData.h"
#include "R5EquipmentItemLogicParams.h"
#include "R5RangeWeaponActiveReloadAbilityGPData.h"
#include "R5RangeWeaponAnimMontageData.h"
#include "R5RangeWeaponGetReadyAbilityGPDatum.h"
#include "R5RangeWeaponHandlingAbilityGPData.h"
#include "R5RangeWeaponItemLogicData.h"
#include "R5RangeWeaponPassiveReloadAbilityGPData.h"
#include "R5RangeWeaponShootAbilityGPData.h"
#include "R5RangeWeaponItemLogicParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5RangeWeaponItemLogicParams : public UR5EquipmentItemLogicParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5RangeWeaponItemLogicData CommonData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5RangeWeaponHandlingAbilityGPData HandlingGPData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5RangeWeaponAnimMontageData AnimMontageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5DrawWeaponAbilityGPData DrawWeaponGPData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5RangeWeaponGetReadyAbilityGPDatum GetReadyGPData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5RangeWeaponActiveReloadAbilityGPData ActiveReloadGPData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5RangeWeaponPassiveReloadAbilityGPData PassiveReloadGPData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5RangeWeaponShootAbilityGPData ShootGPData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5EquipmentInputData InputData;
    
    UR5RangeWeaponItemLogicParams();

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5RangeWeaponHandlingAbilityCommonTechData.h"
#include "R5RangeWeaponHandlingActiveReloadTechData.h"
#include "R5RangeWeaponHandlingDrawTechData.h"
#include "R5RangeWeaponHandlingGetReadyTechData.h"
#include "R5RangeWeaponHandlingShootTechData.h"
#include "R5RangeWeaponHandlingAbilityTechParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5RangeWeaponHandlingAbilityTechParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5RangeWeaponHandlingAbilityCommonTechData CommonTechData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5RangeWeaponHandlingShootTechData ShootTechData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5RangeWeaponHandlingDrawTechData DrawTechData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5RangeWeaponHandlingGetReadyTechData GetReadyTechData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5RangeWeaponHandlingActiveReloadTechData ActiveReloadTechData;
    
    UR5RangeWeaponHandlingAbilityTechParams();

};


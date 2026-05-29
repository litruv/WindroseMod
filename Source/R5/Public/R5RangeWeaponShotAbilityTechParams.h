#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5RangeWeaponShotAbilityTechData.h"
#include "R5RangeWeaponShotAbilityTechParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5RangeWeaponShotAbilityTechParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5RangeWeaponShotAbilityTechData TechData;
    
    UR5RangeWeaponShotAbilityTechParams();

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5RangeWeaponMultiShotAbilityTechData.h"
#include "R5RangeWeaponMultiShotAbilityTechParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5RangeWeaponMultiShotAbilityTechParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5RangeWeaponMultiShotAbilityTechData TechData;
    
    UR5RangeWeaponMultiShotAbilityTechParams();

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5RangeWeaponRecoilAbilityTechData.h"
#include "R5RangeWeaponRecoilAbilityTechParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5RangeWeaponRecoilAbilityTechParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5RangeWeaponRecoilAbilityTechData TechData;
    
    UR5RangeWeaponRecoilAbilityTechParams();

};


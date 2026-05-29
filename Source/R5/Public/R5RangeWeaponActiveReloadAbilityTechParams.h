#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5RangeWeaponActiveReloadAbilityTechData.h"
#include "R5RangeWeaponActiveReloadAbilityTechParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5RangeWeaponActiveReloadAbilityTechParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5RangeWeaponActiveReloadAbilityTechData TechData;
    
    UR5RangeWeaponActiveReloadAbilityTechParams();

};


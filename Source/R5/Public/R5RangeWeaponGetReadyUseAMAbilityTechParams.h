#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5RangeWeaponGetReadyUseAMAbilityTechData.h"
#include "R5RangeWeaponGetReadyUseAMAbilityTechParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5RangeWeaponGetReadyUseAMAbilityTechParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5RangeWeaponGetReadyUseAMAbilityTechData TechData;
    
    UR5RangeWeaponGetReadyUseAMAbilityTechParams();

};


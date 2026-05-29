#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5RangeWeaponGetReadyAbilityTechData.h"
#include "R5RangeWeaponGetReadyAbilityTechParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5RangeWeaponGetReadyAbilityTechParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5RangeWeaponGetReadyAbilityTechData TechData;
    
    UR5RangeWeaponGetReadyAbilityTechParams();

};


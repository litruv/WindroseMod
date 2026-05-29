#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5DrawWeaponAbilityTechData.h"
#include "R5DrawWeaponAbilityTechParams.generated.h"

UCLASS(Blueprintable)
class UR5DrawWeaponAbilityTechParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5DrawWeaponAbilityTechData TechData;
    
    UR5DrawWeaponAbilityTechParams();

};


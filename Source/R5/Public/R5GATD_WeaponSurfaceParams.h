#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbilityTargetData -FallbackName=GameplayAbilityTargetData
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "R5GATD_WeaponSurfaceParams.generated.h"

class UWeaponSurfaceEffectsParams;

USTRUCT(BlueprintType)
struct R5_API FR5GATD_WeaponSurfaceParams : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeaponSurfaceEffectsParams* SurfaceParams;
    
    FR5GATD_WeaponSurfaceParams();
};


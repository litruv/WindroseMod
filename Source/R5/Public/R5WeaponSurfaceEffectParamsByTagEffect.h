#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "R5WeaponSurfaceEffectParamsByTagEffect.generated.h"

class UWeaponSurfaceEffectsParams;

USTRUCT(BlueprintType)
struct FR5WeaponSurfaceEffectParamsByTagEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer EffectTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeaponSurfaceEffectsParams* WeaponSurfaceEffectsParams;
    
    R5_API FR5WeaponSurfaceEffectParamsByTagEffect();
};


#pragma once
#include "CoreMinimal.h"
#include "R5SurfaceEffectData.h"
#include "R5WeaponSurfaceEffectData.generated.h"

USTRUCT(BlueprintType)
struct FR5WeaponSurfaceEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5SurfaceEffectData DamageEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5SurfaceEffectData IneffectiveDamageEffect;
    
    R5_API FR5WeaponSurfaceEffectData();
};


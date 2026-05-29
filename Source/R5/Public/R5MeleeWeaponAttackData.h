#pragma once
#include "CoreMinimal.h"
#include "R5WeaponSurfaceEffectParamsByTagEffect.h"
#include "Templates/SubclassOf.h"
#include "R5MeleeWeaponAttackData.generated.h"

class UGameplayEffect;
class UR5DamageGEParams;
class UR5PostureDamageGEParams;
class UR5StaggerDamageGEParams;
class UWeaponSurfaceEffectsParams;

USTRUCT(BlueprintType)
struct FR5MeleeWeaponAttackData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5DamageGEParams* DamageGEParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5PostureDamageGEParams* PostureDamageGEParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5StaggerDamageGEParams* StaggerDamageGEParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageRating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorPenetrationBaseValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockStaminaCostModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FXDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeaponSurfaceEffectsParams* WeaponSurfaceEffectsParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5WeaponSurfaceEffectParamsByTagEffect> WeaponSurfaceEffectsParamsWithEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> AdditionalAttackGameplayEffects;
    
    R5_API FR5MeleeWeaponAttackData();
};


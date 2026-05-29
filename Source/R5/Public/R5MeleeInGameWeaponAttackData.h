#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectSpecHandle -FallbackName=GameplayEffectSpecHandle
#include "GameplayEffectTypes.h"
#include "R5MeleeInGameAttackData.h"
#include "R5WeaponSurfaceEffectParamsByTagEffect.h"
#include "Templates/SubclassOf.h"
#include "R5MeleeInGameWeaponAttackData.generated.h"

class UGameplayEffect;
class UR5PostureDamageGEParams;
class UR5StaggerDamageGEParams;
class UWeaponSurfaceEffectsParams;

USTRUCT(BlueprintType)
struct FR5MeleeInGameWeaponAttackData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5MeleeInGameAttackData> Attacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5PostureDamageGEParams* PostureDamageGEParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5StaggerDamageGEParams* StaggerDamageGEParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeaponSurfaceEffectsParams* WeaponSurfaceEffectsParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5WeaponSurfaceEffectParamsByTagEffect> WeaponSurfaceEffectsParamsWithEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> AdditionalAttackGameplayEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayEffectSpecHandle> AttackGESpecHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayEffectSpecHandle PostureGESpecHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayEffectSpecHandle DeflectToSelfPostureGESpecHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayEffectSpecHandle StaggerGESpecHandle;
    
    R5_API FR5MeleeInGameWeaponAttackData();
};


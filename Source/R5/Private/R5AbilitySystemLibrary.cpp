#include "R5AbilitySystemLibrary.h"

void UR5AbilitySystemLibrary::GetBlockCueTargetDataFromContext(const FGameplayEffectContextHandle& ContextHandle, FR5TargetData_BlockCue& OutTargetData, bool& bOutSuccess)
{
}

void UR5AbilitySystemLibrary::GetInteractionNotificationDataFromContext(const FGameplayEffectContextHandle& ContextHandle, FR5GATD_PickupNotification& OutTargetData, bool& bOutSuccess)
{
}

void UR5AbilitySystemLibrary::RemoveActiveGameplayEffect(AActor* Actor, const FActiveGameplayEffectHandle& Handle, int32 StacksToRemove)
{
}

bool UR5AbilitySystemLibrary::HasAllGameplayEffectAssetTags(const FActiveGameplayEffectHandle& GameplayEffectHandle, const FGameplayTagContainer& TagsToCheck)
{
    return false;
}

bool UR5AbilitySystemLibrary::GameplayEffectSpecHasTag(const FGameplayEffectSpec& GameplayEffectSpec, const FGameplayTag& Tag)
{
    return false;
}

bool UR5AbilitySystemLibrary::HasR5EffectStatusData(const FActiveGameplayEffectHandle& GameplayEffectHandle, const TArray<ER5GameplayEffectStatusType>& EffectTypes)
{
    return false;
}

void UR5AbilitySystemLibrary::GetTargetDataHandleFromGameplayEffectContext(const FGameplayEffectContextHandle& ContextHandle, FGameplayAbilityTargetDataHandle& OutTargetDataHandle, bool& bOutSuccess)
{
}

void UR5AbilitySystemLibrary::GetFXEffectTargetDataFromContext(const FGameplayEffectContextHandle& ContextHandle, FR5GATD_FXEffect& OutTargetData, bool& bOutSuccess)
{
}

void UR5AbilitySystemLibrary::GetFXEffectTargetData(const FGameplayAbilityTargetDataHandle& TargetDataHandle, FR5GATD_FXEffect& OutTargetData, bool& bOutSuccess)
{
}

void UR5AbilitySystemLibrary::ExecuteStaticAction(UR5StaticAction* StaticAction, const FGameplayAbilityTargetDataHandle& TargetDataHandle, AActor* Instigator)
{
}

void UR5AbilitySystemLibrary::GetSpawnNiagaraSystemTargetData(const FGameplayAbilityTargetDataHandle& TargetDataHandle, FR5GATD_RangeWeaponSpawnNiagaraSystem& OutTargetData, bool& bOutSuccess)
{
}

float UR5AbilitySystemLibrary::GetEffectLevelFromEffectSpec(const FGameplayEffectSpec& GameplayEffectSpec)
{
    return 0.f;
}

UGameplayAbility* UR5AbilitySystemLibrary::GetAbilityPrimaryInstanceByClass(const UAbilitySystemComponent* AbilitySystemComponent, TSubclassOf<UGameplayAbility> Class)
{
    return nullptr;
}

FGameplayTagContainer UR5AbilitySystemLibrary::GetAllAssetTagsFromEffectSpec(const FGameplayEffectSpec& GameplayEffectSpec)
{
    return {};
}

void UR5AbilitySystemLibrary::GetWeaponSurfaceParamsTargetData(const FGameplayEffectContextHandle& ContextHandle, FR5GATD_WeaponSurfaceParams& OutTargetData, bool& bOutSuccess)
{
}

FActiveGameplayEffectHandle UR5AbilitySystemLibrary::ApplyGameplayEffect(AActor* Actor, const TSubclassOf<UGameplayEffect>& GameplayEffectClass, float Level, const FGameplayEffectContextHandle& EffectContext)
{
    return 0.f;
}

void UR5AbilitySystemLibrary::GetFoliageDamageTargetData(const FGameplayAbilityTargetDataHandle& TargetDataHandle, FR5GATD_FoliageDamage& OutTargetData, bool& bOutSuccess)
{
}

UR5GameplayEffectItemsUIData* UR5AbilitySystemLibrary::GetR5EffectItemData(const FActiveGameplayEffectHandle& GameplayEffectHandle)
{
    return nullptr;
}

UR5GameplayEffectStatusUIData* UR5AbilitySystemLibrary::GetR5EffectStatusData(const FActiveGameplayEffectHandle& GameplayEffectHandle)
{
    return nullptr;
}

UR5AbilitySystemLibrary::UR5AbilitySystemLibrary()
{
}

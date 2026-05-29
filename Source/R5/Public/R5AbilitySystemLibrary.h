#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=ActiveGameplayEffectHandle -FallbackName=ActiveGameplayEffectHandle
#include "ActiveGameplayEffectHandle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbilityTargetDataHandle -FallbackName=GameplayAbilityTargetDataHandle
#include "Abilities/GameplayAbilityTargetTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectContextHandle -FallbackName=GameplayEffectContextHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectSpec -FallbackName=GameplayEffectSpec
#include "GameplayEffectTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=ER5GameplayEffectStatusType -FallbackName=ER5GameplayEffectStatusType
#include "ER5GameplayEffectStatusType.h"
#include "R5GATD_FXEffect.h"
#include "R5GATD_FoliageDamage.h"
#include "R5GATD_PickupNotification.h"
#include "R5GATD_RangeWeaponSpawnNiagaraSystem.h"
#include "R5GATD_WeaponSurfaceParams.h"
#include "R5TargetData_BlockCue.h"
#include "Templates/SubclassOf.h"
#include "R5AbilitySystemLibrary.generated.h"

class AActor;
class UAbilitySystemComponent;
class UGameplayAbility;
class UGameplayEffect;
class UR5GameplayEffectItemsUIData;
class UR5GameplayEffectStatusUIData;
class UR5StaticAction;

UCLASS(Abstract, Blueprintable)
class R5_API UR5AbilitySystemLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UR5AbilitySystemLibrary();

    UFUNCTION(BlueprintCallable)
    static void RemoveActiveGameplayEffect(AActor* Actor, const FActiveGameplayEffectHandle& Handle, int32 StacksToRemove);
    
    UFUNCTION(BlueprintCallable)
    static bool HasR5EffectStatusData(const FActiveGameplayEffectHandle& GameplayEffectHandle, const TArray<ER5GameplayEffectStatusType>& EffectTypes);
    
    UFUNCTION(BlueprintCallable)
    static bool HasAllGameplayEffectAssetTags(const FActiveGameplayEffectHandle& GameplayEffectHandle, const FGameplayTagContainer& TagsToCheck);
    
    UFUNCTION(BlueprintCallable)
    static void GetWeaponSurfaceParamsTargetData(const FGameplayEffectContextHandle& ContextHandle, FR5GATD_WeaponSurfaceParams& OutTargetData, bool& bOutSuccess);
    
    UFUNCTION(BlueprintCallable)
    static void GetTargetDataHandleFromGameplayEffectContext(const FGameplayEffectContextHandle& ContextHandle, FGameplayAbilityTargetDataHandle& OutTargetDataHandle, bool& bOutSuccess);
    
    UFUNCTION(BlueprintCallable)
    static void GetSpawnNiagaraSystemTargetData(const FGameplayAbilityTargetDataHandle& TargetDataHandle, FR5GATD_RangeWeaponSpawnNiagaraSystem& OutTargetData, bool& bOutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UR5GameplayEffectStatusUIData* GetR5EffectStatusData(const FActiveGameplayEffectHandle& GameplayEffectHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UR5GameplayEffectItemsUIData* GetR5EffectItemData(const FActiveGameplayEffectHandle& GameplayEffectHandle);
    
    UFUNCTION(BlueprintCallable)
    static void GetInteractionNotificationDataFromContext(const FGameplayEffectContextHandle& ContextHandle, FR5GATD_PickupNotification& OutTargetData, bool& bOutSuccess);
    
    UFUNCTION(BlueprintCallable)
    static void GetFXEffectTargetDataFromContext(const FGameplayEffectContextHandle& ContextHandle, FR5GATD_FXEffect& OutTargetData, bool& bOutSuccess);
    
    UFUNCTION(BlueprintCallable)
    static void GetFXEffectTargetData(const FGameplayAbilityTargetDataHandle& TargetDataHandle, FR5GATD_FXEffect& OutTargetData, bool& bOutSuccess);
    
    UFUNCTION(BlueprintCallable)
    static void GetFoliageDamageTargetData(const FGameplayAbilityTargetDataHandle& TargetDataHandle, FR5GATD_FoliageDamage& OutTargetData, bool& bOutSuccess);
    
    UFUNCTION(BlueprintCallable)
    static float GetEffectLevelFromEffectSpec(const FGameplayEffectSpec& GameplayEffectSpec);
    
    UFUNCTION(BlueprintCallable)
    static void GetBlockCueTargetDataFromContext(const FGameplayEffectContextHandle& ContextHandle, FR5TargetData_BlockCue& OutTargetData, bool& bOutSuccess);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTagContainer GetAllAssetTagsFromEffectSpec(const FGameplayEffectSpec& GameplayEffectSpec);
    
    UFUNCTION(BlueprintCallable)
    static UGameplayAbility* GetAbilityPrimaryInstanceByClass(const UAbilitySystemComponent* AbilitySystemComponent, TSubclassOf<UGameplayAbility> Class);
    
    UFUNCTION(BlueprintCallable)
    static bool GameplayEffectSpecHasTag(const FGameplayEffectSpec& GameplayEffectSpec, const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable)
    static void ExecuteStaticAction(UR5StaticAction* StaticAction, const FGameplayAbilityTargetDataHandle& TargetDataHandle, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    static FActiveGameplayEffectHandle ApplyGameplayEffect(AActor* Actor, const TSubclassOf<UGameplayEffect>& GameplayEffectClass, float Level, const FGameplayEffectContextHandle& EffectContext);
    
};


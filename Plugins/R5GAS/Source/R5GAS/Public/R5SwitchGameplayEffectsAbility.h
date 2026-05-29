#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5Ability.h"
#include "R5GameplayEffectsArray.h"
#include "R5SwitchGameplayEffectsManagedInput.h"
#include "R5SwitchGameplayEffectsAbility.generated.h"

UCLASS(Abstract, Blueprintable)
class R5GAS_API UR5SwitchGameplayEffectsAbility : public UR5Ability {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIndexSignature, int32, Index);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIndexSignature OnActiveIndexChanged;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5GameplayEffectsArray> ManagedGameplayEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FR5SwitchGameplayEffectsManagedInput> AwaitedInputActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ActivateGameplayEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EndGameplayEvent;
    
public:
    UR5SwitchGameplayEffectsAbility();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FR5GameplayEffectsArray> GetManagedGameplayEffects() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveGameplayEffectIndex() const;
    
};


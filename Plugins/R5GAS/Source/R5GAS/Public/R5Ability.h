#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbility -FallbackName=GameplayAbility
#include "Abilities/GameplayAbility.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5Ability.generated.h"

class AAIController;
class APlayerController;
class UAnimMontage;

UCLASS(Blueprintable)
class R5GAS_API UR5Ability : public UGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActivateAbilityOnGranted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SendOnEndAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SendOnCancelAbility;
    
    UR5Ability();

    UFUNCTION(BlueprintCallable)
    void MontageJumpToSectionOwningClient(FName SectionName);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_ActivateWhenInitialized();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* GetPlayerControllerFromActorInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetAnimMontageByTag(FGameplayTag MontageTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAIController* GetAIControllerFromActorInfo() const;
    
};


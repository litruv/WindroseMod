#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEventData -FallbackName=GameplayEventData
#include "Abilities/GameplayAbilityTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5Ability_InteractOption_Base.generated.h"

class AActor;
class IR5InteractionTarget;
class UR5InteractionTarget;
class UR5InteractionTargetModel;

UCLASS(Abstract, Blueprintable)
class R5_API UR5Ability_InteractOption_Base : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInhibitInteractWhileActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFinishOnTriggerInputWhileActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTrackRequirementsWhileActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer InterruptionAbilityComponentTags;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5InteractionTargetModel* TargetModel;
    
public:
    UR5Ability_InteractOption_Base();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleInterruptEvent(FGameplayEventData Payload);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTargetActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TScriptInterface<IR5InteractionTarget> GetInteractTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5InteractionTargetModel* GetInteractionTargetModel() const;
    
};


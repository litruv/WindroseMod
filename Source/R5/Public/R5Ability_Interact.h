#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEventData -FallbackName=GameplayEventData
#include "Abilities/GameplayAbilityTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5Ability_Interact.generated.h"

class AController;
class APawn;
class UAbilityTask;
class UR5AbilityTask_TraceInteractionTarget;
class UR5InteractAbilitySettings;
class UR5InteractionOption;
class UR5InteractionTargetModel;

UCLASS(Blueprintable)
class R5_API UR5Ability_Interact : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5InteractAbilitySettings* AbilityParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5InteractionTargetModel* TargetModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask* AcquireTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UR5InteractionOption*, UAbilityTask*> TriggerOptionsTasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5AbilityTask_TraceInteractionTarget* TraceTargetTask;
    
public:
    UR5Ability_Interact();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPawnControllerChanged(APawn* Pawn, AController* OldController, AController* NewController);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractRequestEventReceived(FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable)
    void OnAccessibleOptionsChanged(const TArray<UR5InteractionOption*>& NewOptions);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5InteractionTargetModel* GetInteractionTargetModel() const;
    
};


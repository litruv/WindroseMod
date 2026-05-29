#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=EnhancedInput -ObjectName=ETriggerEvent -FallbackName=ETriggerEvent
#include "InputTriggers.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=EnhancedInput -ObjectName=InputActionInstance -FallbackName=InputActionInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
#include "R5AbilityTask_WaitEnhancedInput.generated.h"

class APlayerController;
class UGameplayAbility;
class UInputAction;
class UR5AbilityTask_WaitEnhancedInput;

UCLASS(Blueprintable)
class R5GAS_API UR5AbilityTask_WaitEnhancedInput : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTriggerEventDelegate, const FInputActionInstance&, InputActionInstance);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTriggerEventDelegate OnTriggerEvent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UInputAction*> InputActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ETriggerEvent TriggerEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* FallbackPC;
    
public:
    UR5AbilityTask_WaitEnhancedInput();

    UFUNCTION(BlueprintCallable)
    static UR5AbilityTask_WaitEnhancedInput* NewTaskMulti(UGameplayAbility* OwningAbility, FName TaskInstanceName, TArray<UInputAction*> NewInputActions, ETriggerEvent NewTriggerEvent);
    
    UFUNCTION(BlueprintCallable)
    static UR5AbilityTask_WaitEnhancedInput* NewTask(UGameplayAbility* OwningAbility, FName TaskInstanceName, UInputAction* InputAction, ETriggerEvent NewTriggerEvent);
    
};


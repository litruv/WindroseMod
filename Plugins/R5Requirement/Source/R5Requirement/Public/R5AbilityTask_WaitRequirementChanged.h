#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
#include "R5RequirementContext.h"
#include "R5AbilityTask_WaitRequirementChanged.generated.h"

class UGameplayAbility;
class UR5AbilityTask_WaitRequirementChanged;
class UR5Requirement;

UCLASS(Blueprintable)
class R5REQUIREMENT_API UR5AbilityTask_WaitRequirementChanged : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRequiremtnChanged, bool, bMet);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequiremtnChanged OnRequirementChanged;
    
    UR5AbilityTask_WaitRequirementChanged();

private:
    UFUNCTION(BlueprintCallable)
    void OnRequirementChangedCallback(bool bMet);
    
public:
    UFUNCTION(BlueprintCallable)
    static UR5AbilityTask_WaitRequirementChanged* NewTask(UGameplayAbility* OwningAbility, FName TaskInstanceName, TArray<UR5Requirement*> Requirements, const FR5RequirementContext& Context);
    
};


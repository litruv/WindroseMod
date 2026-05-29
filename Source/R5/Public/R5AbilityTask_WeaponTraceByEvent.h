#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbilityTargetDataHandle -FallbackName=GameplayAbilityTargetDataHandle
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "R5AbilityTask_WeaponTraceByEvent.generated.h"

class UGameplayAbility;
class UR5AbilityTask_WeaponTraceByEvent;
class UR5WeaponTraceByEventParams;

UCLASS(Blueprintable)
class R5_API UR5AbilityTask_WeaponTraceByEvent : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWeaponTraceByEventDelegate, FGameplayAbilityTargetDataHandle, TargetDataHandle);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponTraceByEventDelegate OnHit;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5WeaponTraceByEventParams* TraceParams;
    
public:
    UR5AbilityTask_WeaponTraceByEvent();

    UFUNCTION(BlueprintCallable)
    static UR5AbilityTask_WeaponTraceByEvent* R5WeaponTrace(UGameplayAbility* OwningAbility, UR5WeaponTraceByEventParams* InTraceParams);
    
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityAsync -FallbackName=AbilityAsync
#include "Abilities/Async/AbilityAsync.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=ActiveGameplayEffectHandle -FallbackName=ActiveGameplayEffectHandle
#include "ActiveGameplayEffectHandle.h"
#include "R5AsyncTaskWaitGameplayEffectUpdate.generated.h"

class AActor;
class UR5AsyncTaskWaitGameplayEffectUpdate;

UCLASS(Blueprintable)
class R5GAS_API UR5AsyncTaskWaitGameplayEffectUpdate : public UAbilityAsync {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangedDelegate, FActiveGameplayEffectHandle, ActiveHandle);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangedDelegate OnChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangedDelegate OnRemoved;
    
    UR5AsyncTaskWaitGameplayEffectUpdate();

    UFUNCTION(BlueprintCallable)
    static UR5AsyncTaskWaitGameplayEffectUpdate* R5WaitGameplayEffectUpdate(AActor* TargetActor, FActiveGameplayEffectHandle ActiveHandle);
    
};


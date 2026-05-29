#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
#include "R5AbilityTask_PrepareGameplayArea.generated.h"

class UGameplayAbility;
class UR5AbilityTask_PrepareGameplayArea;

UCLASS(Blueprintable)
class R5GAS_API UR5AbilityTask_PrepareGameplayArea : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FReadySignature);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReadySignature OnReady;
    
    UR5AbilityTask_PrepareGameplayArea();

    UFUNCTION(BlueprintCallable)
    static UR5AbilityTask_PrepareGameplayArea* NewTask(UGameplayAbility* OwningAbility, FName TaskInstanceName, const FVector& Location, float Radius, float HalfHeight, float TimeLimit, float HoldTime);
    
};


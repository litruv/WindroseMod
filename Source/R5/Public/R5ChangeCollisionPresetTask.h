#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
#include "R5ChangeCollisionPresetTask.generated.h"

class UGameplayAbility;
class UPrimitiveComponent;
class UR5ChangeCollisionPresetTask;

UCLASS(Blueprintable)
class R5_API UR5ChangeCollisionPresetTask : public UAbilityTask {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* Collision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FName ProfileName;
    
public:
    UR5ChangeCollisionPresetTask();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    static UR5ChangeCollisionPresetTask* ChangeCollisionProfile(UGameplayAbility* OwningAbility, FName TaskInstanceName, UPrimitiveComponent* PrimitiveComponent, FName CollisionProfileName);
    
};


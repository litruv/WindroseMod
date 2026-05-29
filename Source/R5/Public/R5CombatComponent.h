#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "ER5AttackType.h"
#include "ER5InputMode.h"
#include "R5CombatComponent.generated.h"

class UR5CombatComponentParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5CombatComponent : public UActorComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CombatComponentParams* Params;
    
public:
    UR5CombatComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TryCombo(ER5AttackType AttackType);
    
    UFUNCTION(BlueprintCallable)
    void OffHandReloadAction();
    
    UFUNCTION(BlueprintCallable)
    void OffHandChangeHoldAction(bool bHold);
    
    UFUNCTION(BlueprintCallable)
    void OffHandActiveAction();
    
protected:
    UFUNCTION(BlueprintCallable)
    void InputModeChanged(ER5InputMode Mode);
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableBlock();
    
    UFUNCTION(BlueprintCallable)
    void DisableBlock();
    
};


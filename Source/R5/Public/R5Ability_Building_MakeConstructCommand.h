#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=EnhancedInput -ObjectName=InputActionInstance -FallbackName=InputActionInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbilityTargetDataHandle -FallbackName=GameplayAbilityTargetDataHandle
#include "Abilities/GameplayAbilityTargetTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "OnAbilityReadyDelegate.h"
#include "R5Ability_Building_MakeConstructCommand.generated.h"

class AR5BuildingBlock;
class UAbilityTask_PlayMontageAndWait;
class UR5AbilityTask_FindConstructTarget;
class UR5BuildingBrush;
class UR5BuildingConstructionContext;

UCLASS(Blueprintable)
class R5_API UR5Ability_Building_MakeConstructCommand : public UR5Ability {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAbilityReady OnAbilityReadyDelegate;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BuildingConstructionContext* ConstructionContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5AbilityTask_FindConstructTarget* StrategyTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UR5BuildingBrush*> AvailableBrushes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_PlayMontageAndWait* MontageTask;
    
public:
    UR5Ability_Building_MakeConstructCommand();

    UFUNCTION(BlueprintCallable)
    void SetBuildingBrush(UR5BuildingBrush* BuildingBrush);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnToggleSnappingMode(const FInputActionInstance& InputActionInstance);
    
    UFUNCTION(BlueprintCallable)
    void OnShiftBuildingUpDownInputPressed(const FInputActionInstance& InputActionInstance);
    
    UFUNCTION(BlueprintCallable)
    void OnShiftBuildingInputReleased(const FInputActionInstance& InputActionInstance);
    
    UFUNCTION(BlueprintCallable)
    void OnShiftBuildingInputPressed(const FInputActionInstance& InputActionInstance);
    
    UFUNCTION(BlueprintCallable)
    void OnRotateBuildingInput(const FInputActionInstance& InputActionInstance);
    
    UFUNCTION(BlueprintCallable)
    void OnPlaceBlockInputReleased(const FInputActionInstance& InputActionInstance);
    
    UFUNCTION(BlueprintCallable)
    void OnPlaceBlockInputPressed(const FInputActionInstance& InputActionInstance);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeRotationStep(const FInputActionInstance& InputActionInstance);
    
    UFUNCTION(BlueprintCallable)
    void OnBuildingAddedToIsland(AR5BuildingBlock* BuildingBlock);
    
    UFUNCTION(BlueprintCallable)
    void MakePreConstructRequest(const FGameplayAbilityTargetDataHandle& Handle);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConstructionInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAbilityReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5BuildingBrush* GetSelectedBuildingBrush() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void FinishConstruction();
    
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=EnhancedInput -ObjectName=InputActionInstance -FallbackName=InputActionInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbilityTargetDataHandle -FallbackName=GameplayAbilityTargetDataHandle
#include "Abilities/GameplayAbilityTargetTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5Ability_Building_MakeDestroyCommand.generated.h"

class AR5BuildingBlock;
class UR5AbilityTask_WaitTargetData;
class UR5BuildingItem;

UCLASS(Blueprintable)
class R5_API UR5Ability_Building_MakeDestroyCommand : public UR5Ability {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFocusedBuildingChanged, const UR5BuildingItem*, BuildingItem);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFocusedBuildingChanged OnFocusedBuildingChanged;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5AbilityTask_WaitTargetData* WaitTargetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AR5BuildingBlock*> DestructibleBlocks;
    
public:
    UR5Ability_Building_MakeDestroyCommand();

private:
    UFUNCTION(BlueprintCallable)
    void OnTargetBlockChanged(AR5BuildingBlock* BuildingBlock);
    
    UFUNCTION(BlueprintCallable)
    void OnDestroyInput(const FInputActionInstance& InputActionInstance);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFocusedBlock() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void Destroy(const FGameplayAbilityTargetDataHandle& TargetDataHandle);
    
};


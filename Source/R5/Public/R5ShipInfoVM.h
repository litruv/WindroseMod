#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Int32Interval -FallbackName=Int32Interval
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLEffectWithCostUIData -FallbackName=R5BLEffectWithCostUIData
#include "R5BLEffectWithCostUIData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMViewModel -FallbackName=R5MVVMViewModel
#include "R5MVVMViewModel.h"
#include "R5ShipInfoVM.generated.h"

class UR5AbilitySystemAttributeVM;
class UR5MVVMObserver_Ship;
class UR5MVVMObserver_ShipBuffs;

UCLASS(Blueprintable)
class R5_API UR5ShipInfoVM : public UR5MVVMViewModel {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMObserver_Ship* ShipObserver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMObserver_ShipBuffs* ShipBuffsObserver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AbilitySystemAttributeVM* AbilitySystemAttributeVM;
    
public:
    UR5ShipInfoVM();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasShipInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasActiveEffect() const;
    
    UFUNCTION(BlueprintPure)
    FInt32Interval GetShipCrew() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHealthPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FR5BLEffectWithCostUIData GetCurrentBuffUIData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentBuffRemainingDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5AbilitySystemAttributeVM* GetAbilitySystemAttributeVM() const;
    
};


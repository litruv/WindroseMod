#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLEffectWithCostUIData -FallbackName=R5BLEffectWithCostUIData
#include "R5BLEffectWithCostUIData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLItemsStackData -FallbackName=R5BLItemsStackData
#include "R5BLItemsStackData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMViewModel -FallbackName=R5MVVMViewModel
#include "R5MVVMViewModel.h"
#include "R5ShipEffectsServiceVM.generated.h"

class UR5MVVMObserver_Ship;
class UR5MVVMObserver_ShipBuffs;
class UR5ShipEffectVM;
class UR5ShipEffectsListVM;

UCLASS(Blueprintable)
class R5_API UR5ShipEffectsServiceVM : public UR5MVVMViewModel {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ShipEffectsListVM* ShipEffectsListVM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMObserver_Ship* ShipObserver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMObserver_ShipBuffs* ShipBuffsObserver;
    
public:
    UR5ShipEffectsServiceVM();

protected:
    UFUNCTION(BlueprintCallable)
    void OnEffectsListUpdated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShipSpawned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSelectedEffect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasActiveEffect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5ShipEffectsListVM* GetShipEffectsList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5ShipEffectVM* GetSelectedEffectVM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FR5BLItemsStackData> GetCostItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FR5BLEffectWithCostUIData GetActiveEffectUIData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetActiveEffectRemainingDuration() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearSelectedEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanApplyEffects() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplySelectedEffect();
    
};


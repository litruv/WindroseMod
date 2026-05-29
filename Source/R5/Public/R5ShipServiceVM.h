#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMViewModel -FallbackName=R5MVVMViewModel
#include "R5MVVMViewModel.h"
#include "R5ShipServiceVM.generated.h"

class UR5CostVM;
class UR5MVVMObserver_ShipDockInventories;
class UR5ShipCrewServiceVM;
class UR5ShipEffectsServiceVM;
class UR5ShipHealthServiceVM;

UCLASS(Blueprintable)
class R5_API UR5ShipServiceVM : public UR5MVVMViewModel {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMObserver_ShipDockInventories* DockInventoriesObserver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ShipCrewServiceVM* ShipCrewServiceVM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ShipHealthServiceVM* ShipHealthServiceVM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ShipEffectsServiceVM* ShipEffectsServiceVM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CostVM* ServiceCostVM;
    
public:
    UR5ShipServiceVM();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCostUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnChildVMChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5ShipHealthServiceVM* GetShipHealthServiceVM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5ShipEffectsServiceVM* GetShipEffectsServiceVM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5ShipCrewServiceVM* GetShipCrewServiceVM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5CostVM* GetCostVM() const;
    
    UFUNCTION(BlueprintCallable)
    void Confirm();
    
    UFUNCTION(BlueprintCallable)
    void ClearAll();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanConfirm() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanClearAll() const;
    
};


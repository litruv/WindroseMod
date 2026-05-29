#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=ER5BLDisassembleShipAvailability -FallbackName=ER5BLDisassembleShipAvailability
#include "ER5BLDisassembleShipAvailability.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMViewModel -FallbackName=R5MVVMViewModel
#include "R5MVVMViewModel.h"
#include "R5UIRecipeItemData.h"
#include "R5SelectedShipPanelVM.generated.h"

class UR5MVVMObserver_InventoriesAuto;
class UR5ShipEntityVM;
class UR5ShipInfoVM;

UCLASS(Blueprintable)
class R5_API UR5SelectedShipPanelVM : public UR5MVVMViewModel {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ShipEntityVM* SelectedShipVM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ShipInfoVM* ShipInfoVM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMObserver_InventoriesAuto* InventoriesObserver;
    
public:
    UR5SelectedShipPanelVM();

    UFUNCTION(BlueprintCallable)
    void StoreShip();
    
    UFUNCTION(BlueprintCallable)
    void RestoreShip();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSelectedShipVMUpdated();
    
public:
    UFUNCTION(BlueprintCallable)
    void MarkAsFlagship();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSelectedShip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5ShipInfoVM* GetShipInfoVM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5ShipEntityVM* GetSelectedShipVM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FR5UIRecipeItemData> GetRestoreCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FR5UIRecipeItemData> GetDisassembleResult() const;
    
    UFUNCTION(BlueprintCallable)
    void DisassembleShip();
    
    UFUNCTION(BlueprintCallable)
    void DeployShip();
    
    UFUNCTION(BlueprintCallable)
    void DemoteFromFlagship();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRestoreShip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ER5BLDisassembleShipAvailability CanDisassemble() const;
    
};


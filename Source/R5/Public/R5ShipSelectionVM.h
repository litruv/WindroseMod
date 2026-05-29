#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMViewModel -FallbackName=R5MVVMViewModel
#include "R5MVVMViewModel.h"
#include "R5ShipSelectionVM.generated.h"

class UR5SelectedShipPanelVM;
class UR5ShipsListVM;

UCLASS(Blueprintable)
class R5_API UR5ShipSelectionVM : public UR5MVVMViewModel {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FR5OnSelectedShipChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnSelectedShipChanged OnSelectedShipChanged;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ShipsListVM* ShipsListVM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5SelectedShipPanelVM* SelectedShipPanelVM;
    
public:
    UR5ShipSelectionVM();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateSelectedRecipePanel();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSelectedShip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5ShipsListVM* GetShipsListVM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5SelectedShipPanelVM* GetSelectedShipPanelVM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FR5BLRecordId GetSelectedShipId() const;
    
};


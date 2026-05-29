#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMViewModel -FallbackName=R5MVVMViewModel
#include "R5MVVMViewModel.h"
#include "R5UIShipDockViewModel.generated.h"

class UR5ShipCraftVM;
class UR5ShipManageVM;
class UR5ShipSelectionVM;

UCLASS(Blueprintable)
class R5_API UR5UIShipDockViewModel : public UR5MVVMViewModel {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ShipSelectionVM* ShipSelectionVM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ShipCraftVM* ShipCraftVM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ShipManageVM* ShipManage;
    
public:
    UR5UIShipDockViewModel();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSelectedShipUpdated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5ShipSelectionVM* GetShipSelectionVM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5ShipManageVM* GetShipManageVM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5ShipCraftVM* GetShipCraftVM() const;
    
};


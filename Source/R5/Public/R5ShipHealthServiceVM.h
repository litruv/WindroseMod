#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLItemsStackData -FallbackName=R5BLItemsStackData
#include "R5BLItemsStackData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMViewModel -FallbackName=R5MVVMViewModel
#include "R5MVVMViewModel.h"
#include "R5ShipHealthServiceVM.generated.h"

class UR5BLShipAttributesView;
class UR5BLShipServiceParams;
class UR5BLShipView;
class UR5MVVMObserver_ShipDockInventories;

UCLASS(Blueprintable)
class R5_API UR5ShipHealthServiceVM : public UR5MVVMViewModel {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLShipAttributesView* ShipAttributesView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLShipView* ShipView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLShipServiceParams* ShipServiceParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMObserver_ShipDockInventories* DockInventoriesObserver;
    
public:
    UR5ShipHealthServiceVM();

    UFUNCTION(BlueprintCallable)
    void Unselect();
    
    UFUNCTION(BlueprintCallable)
    void SelectToggle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelectedService() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHealthFull() const;
    
    UFUNCTION(BlueprintCallable)
    void Heal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetResultShipHealthPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentShipHealthPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FR5BLItemsStackData> GetCostItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanHeal() const;
    
};


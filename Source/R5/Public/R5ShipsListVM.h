#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMListVM -FallbackName=R5MVVMListVM
#include "R5MVVMListVM.h"
#include "ER5ShipProximityStatus.h"
#include "R5ShipsListVM.generated.h"

class UR5BLShipOwnerView;
class UR5BLShipView;
class UR5ShipEntityVM;

UCLASS(Blueprintable)
class R5_API UR5ShipsListVM : public UR5MVVMListVM {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLShipOwnerView* ShipOwnerView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5BLShipView*> ShipsView;
    
public:
    UR5ShipsListVM();

protected:
    UFUNCTION(BlueprintCallable)
    void OnShipEntityUpdated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UR5ShipEntityVM*> GetShipsWithStatus(ER5ShipProximityStatus RequiredStatus) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UR5ShipEntityVM*> GetShipsList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5ShipEntityVM* GetSelectedShipVM() const;
    
};


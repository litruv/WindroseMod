#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMViewModel -FallbackName=R5MVVMViewModel
#include "R5MVVMViewModel.h"
#include "ER5ShipProximityStatus.h"
#include "R5ShipTitleVM.generated.h"

class UR5BLShipOwnerView;
class UR5MVVMObserver_Ship;

UCLASS(Blueprintable)
class R5_API UR5ShipTitleVM : public UR5MVVMViewModel {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMObserver_Ship* ShipObserver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLShipOwnerView* ShipOwnerView;
    
public:
    UR5ShipTitleVM();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFlagship() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTitleShip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ER5ShipProximityStatus GetShipWorldStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetShipName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetShipLevel() const;
    
};


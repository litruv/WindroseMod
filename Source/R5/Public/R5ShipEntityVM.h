#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLShipUIData -FallbackName=R5BLShipUIData
#include "R5BLShipUIData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMListEntityVM -FallbackName=R5MVVMListEntityVM
#include "R5MVVMListEntityVM.h"
#include "ER5ShipProximityStatus.h"
#include "ER5StoreShipAvailability.h"
#include "R5ShipEntityVM.generated.h"

class UR5BLShipParams;
class UR5MVVMObserver_Ship;

UCLASS(Blueprintable)
class R5_API UR5ShipEntityVM : public UR5MVVMListEntityVM {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMObserver_Ship* ShipObserver;
    
public:
    UR5ShipEntityVM();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShipDestroyed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFlagship() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasObservableShip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ER5ShipProximityStatus GetShipWorldStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FR5BLShipUIData GetShipUIData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UR5BLShipParams> GetShipParams() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetShipName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetShipLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FR5BLRecordId GetShipId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ER5StoreShipAvailability CanStoreShip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDeployShip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanChangeFlagshipState() const;
    
};


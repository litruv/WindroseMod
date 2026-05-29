#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLItemsStackData -FallbackName=R5BLItemsStackData
#include "R5BLItemsStackData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMNumberStepperVM -FallbackName=R5MVVMNumberStepperVM
#include "R5MVVMNumberStepperVM.h"
#include "R5ShipCrewServiceVM.generated.h"

class UR5BLScenarioSave_CrewView;
class UR5BLShipView;
class UR5MVVMObserver_ShipDockInventories;

UCLASS(Blueprintable)
class R5_API UR5ShipCrewServiceVM : public UR5MVVMNumberStepperVM {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLScenarioSave_CrewView* ShipCrewView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLShipView* ShipView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMObserver_ShipDockInventories* DockInventoriesObserver;
    
public:
    UR5ShipCrewServiceVM();

    UFUNCTION(BlueprintCallable)
    void HireMembers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FR5BLItemsStackData> GetHireMembersCostItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanHireMembers() const;
    
};


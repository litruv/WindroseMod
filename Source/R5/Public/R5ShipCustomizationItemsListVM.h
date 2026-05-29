#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMListVM -FallbackName=R5MVVMListVM
#include "R5MVVMListVM.h"
#include "R5ShipCustomizationItemsListVM.generated.h"

class UR5BLInventoryView;

UCLASS(Blueprintable)
class R5_API UR5ShipCustomizationItemsListVM : public UR5MVVMListVM {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLInventoryView* PlayerInventoryView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLInventoryView* ShipInventoryView;
    
public:
    UR5ShipCustomizationItemsListVM();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSelectedItemChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetGroupName() const;
    
};


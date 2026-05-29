#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMListEntityVM -FallbackName=R5MVVMListEntityVM
#include "R5MVVMListEntityVM.h"
#include "R5ShipCustomizationItemVM.generated.h"

class UR5BLInventoryItem;
class UTexture2D;

UCLASS(Blueprintable)
class R5_API UR5ShipCustomizationItemVM : public UR5MVVMListEntityVM {
    GENERATED_BODY()
public:
    UR5ShipCustomizationItemVM();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetItemTexture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UR5BLInventoryItem> GetInventoryItem() const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "R5DefaultInventoryVM.h"
#include "R5ShipInventoryVM.generated.h"

UCLASS(Blueprintable)
class R5_API UR5ShipInventoryVM : public UR5DefaultInventoryVM {
    GENERATED_BODY()
public:
    UR5ShipInventoryVM();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUsingEquipmentModule() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUsingDefaultModules() const;
    
};


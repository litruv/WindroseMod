#pragma once
#include "CoreMinimal.h"
#include "R5BaseInventorySlotVM.h"
#include "R5DefaultInventorySlotVM.generated.h"

UCLASS(Blueprintable)
class R5_API UR5DefaultInventorySlotVM : public UR5BaseInventorySlotVM {
    GENERATED_BODY()
public:
    UR5DefaultInventorySlotVM();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasVirtualSlotStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLockedItemsCount() const;
    
};


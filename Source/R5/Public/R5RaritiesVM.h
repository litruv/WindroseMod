#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMViewModel -FallbackName=R5MVVMViewModel
#include "R5MVVMViewModel.h"
#include "R5RaritiesVM.generated.h"

class UR5BLInventoryItem;

UCLASS(Blueprintable)
class R5_API UR5RaritiesVM : public UR5MVVMViewModel {
    GENERATED_BODY()
public:
    UR5RaritiesVM();

    UFUNCTION(BlueprintCallable)
    void TouchItem(const TSoftObjectPtr<UR5BLInventoryItem>& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNewItem(const TSoftObjectPtr<UR5BLInventoryItem>& Item) const;
    
    UFUNCTION(BlueprintCallable)
    void ActionMoveRarity(const TSoftObjectPtr<UR5BLInventoryItem>& Item);
    
};


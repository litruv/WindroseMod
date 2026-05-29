#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMViewModel -FallbackName=R5MVVMViewModel
#include "R5MVVMViewModel.h"
#include "R5InventoryItemsInfoVM.generated.h"

class UR5BLInventoryView;
class UR5ItemsInfoWithFilterVM;

UCLASS(Blueprintable)
class R5_API UR5InventoryItemsInfoVM : public UR5MVVMViewModel {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLInventoryView* InventoryView;
    
public:
    UR5InventoryItemsInfoVM();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5ItemsInfoWithFilterVM* GetItemsFilter(FGameplayTag FilterKey) const;
    
};


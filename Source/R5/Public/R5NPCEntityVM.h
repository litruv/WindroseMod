#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMListEntityVM -FallbackName=R5MVVMListEntityVM
#include "R5MVVMListEntityVM.h"
#include "ER5NPCStatus.h"
#include "R5NPCData.h"
#include "R5NPCEntityVM.generated.h"

class UR5BLInventoryItem;
class UR5BLInventorySlotView;
class UR5InventoriesModulesAggregatorComponent;
class UR5MVVMObserver_BLView;
class UR5MVVMObserver_BuildingCenter;

UCLASS(Blueprintable)
class R5_API UR5NPCEntityVM : public UR5MVVMListEntityVM {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5MVVMObserver_BLView*> BuildingCenterNPCInventoryModulesObservers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5InventoriesModulesAggregatorComponent* NPCInventoriesModulesAggregator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLInventorySlotView* SlotWithNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMObserver_BuildingCenter* BuildingCenterObserver;
    
public:
    UR5NPCEntityVM();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAvailableNPC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FR5NPCData GetUIDataForNPC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ER5NPCStatus GetNPCStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UR5BLInventoryItem> GetNPCItem() const;
    
};


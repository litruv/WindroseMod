#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMListVM -FallbackName=R5MVVMListVM
#include "R5MVVMListVM.h"
#include "R5NPCListVM.generated.h"

class UR5BLInventorySlotView;
class UR5MVVMObserver_BLView;

UCLASS(Blueprintable)
class R5_API UR5NPCListVM : public UR5MVVMListVM {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMObserver_BLView* PlayerNPCInventoryModuleObserver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMObserver_BLView* InteractTargetNPCInventoryModuleObserver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5BLInventorySlotView*> SlotsWithAvailableNPC;
    
public:
    UR5NPCListVM();

};


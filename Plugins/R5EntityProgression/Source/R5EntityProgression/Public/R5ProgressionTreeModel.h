#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMModel -FallbackName=R5MVVMModel
#include "R5MVVMModel.h"
#include "R5ProgressionTreeModel.generated.h"

class UR5BLInventoryView;
class UR5BLProgressionTreeView;
class UR5ProgressionTreeNodeModel;

UCLASS(Blueprintable)
class R5ENTITYPROGRESSION_API UR5ProgressionTreeModel : public UR5MVVMModel {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLProgressionTreeView* ProgressionTreeView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLInventoryView* InventoryView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5ProgressionTreeNodeModel*> NodesModels;
    
public:
    UR5ProgressionTreeModel();

};


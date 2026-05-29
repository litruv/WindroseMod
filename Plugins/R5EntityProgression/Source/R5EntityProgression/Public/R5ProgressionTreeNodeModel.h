#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMModel -FallbackName=R5MVVMModel
#include "R5MVVMModel.h"
#include "R5ProgressionTreeNodeModel.generated.h"

class UR5BLProgressionTreeNodeView;

UCLASS(Blueprintable)
class R5ENTITYPROGRESSION_API UR5ProgressionTreeNodeModel : public UR5MVVMModel {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLProgressionTreeNodeView* ProgressionTreeNodeView;
    
public:
    UR5ProgressionTreeNodeModel();

};


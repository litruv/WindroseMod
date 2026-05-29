#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ActionManager -ObjectName=R5AMTaskParams_Base -FallbackName=R5AMTaskParams_Base
#include "R5AMTaskParams_Base.h"
#include "R5AMTaskData_MoveActorsToTargetLocation.h"
#include "R5AMTaskParams_MoveActorsToTargetLocation.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class R5_API UR5AMTaskParams_MoveActorsToTargetLocation : public UR5AMTaskParams_Base {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AMTaskData_MoveActorsToTargetLocation Params;
    
public:
    UR5AMTaskParams_MoveActorsToTargetLocation();

};


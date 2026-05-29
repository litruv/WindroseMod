#pragma once
#include "CoreMinimal.h"
#include "R5AMTaskData_MoveToState.h"
#include "R5AMTaskParams_Base.h"
#include "R5AMTaskParams_MoveToState.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class R5ACTIONMANAGER_API UR5AMTaskParams_MoveToState : public UR5AMTaskParams_Base {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AMTaskData_MoveToState Params;
    
public:
    UR5AMTaskParams_MoveToState();

};


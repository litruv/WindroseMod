#pragma once
#include "CoreMinimal.h"
#include "R5AMTaskData_ChangeObjectActiveState.h"
#include "R5AMTaskParams_Base.h"
#include "R5AMTaskParams_ChangeObjectActiveState.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class R5ACTIONMANAGER_API UR5AMTaskParams_ChangeObjectActiveState : public UR5AMTaskParams_Base {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AMTaskData_ChangeObjectActiveState Params;
    
public:
    UR5AMTaskParams_ChangeObjectActiveState();

};


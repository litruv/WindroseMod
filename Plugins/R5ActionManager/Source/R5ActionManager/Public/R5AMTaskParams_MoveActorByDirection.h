#pragma once
#include "CoreMinimal.h"
#include "R5AMTaskData_MoveActorByDirection.h"
#include "R5AMTaskParams_Base.h"
#include "R5AMTaskParams_MoveActorByDirection.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class R5ACTIONMANAGER_API UR5AMTaskParams_MoveActorByDirection : public UR5AMTaskParams_Base {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AMTaskData_MoveActorByDirection Params;
    
public:
    UR5AMTaskParams_MoveActorByDirection();

};


#pragma once
#include "CoreMinimal.h"
#include "R5AMTaskData_RemoveActorsByClass.h"
#include "R5AMTaskParams_Base.h"
#include "R5AMTaskParams_RemoveActorsByClass.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class R5ACTIONMANAGER_API UR5AMTaskParams_RemoveActorsByClass : public UR5AMTaskParams_Base {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AMTaskData_RemoveActorsByClass Params;
    
public:
    UR5AMTaskParams_RemoveActorsByClass();

};


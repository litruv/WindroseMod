#pragma once
#include "CoreMinimal.h"
#include "R5AMTaskData_SendGameplayTagToContextActor.h"
#include "R5AMTaskParams_Base.h"
#include "R5AMTaskParams_SendGameplayTagToContextActor.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class R5ACTIONMANAGER_API UR5AMTaskParams_SendGameplayTagToContextActor : public UR5AMTaskParams_Base {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AMTaskData_SendGameplayTagToContextActor Params;
    
public:
    UR5AMTaskParams_SendGameplayTagToContextActor();

};


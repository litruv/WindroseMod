#pragma once
#include "CoreMinimal.h"
#include "R5AMTaskData_RemoveTagFromContext.h"
#include "R5AMTaskParams_Base.h"
#include "R5AMTaskParams_RemoveTagFromContext.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class R5ACTIONMANAGER_API UR5AMTaskParams_RemoveTagFromContext : public UR5AMTaskParams_Base {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AMTaskData_RemoveTagFromContext Params;
    
public:
    UR5AMTaskParams_RemoveTagFromContext();

};


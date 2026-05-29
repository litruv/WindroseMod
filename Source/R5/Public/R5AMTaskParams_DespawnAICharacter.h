#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ActionManager -ObjectName=R5AMTaskParams_Base -FallbackName=R5AMTaskParams_Base
#include "R5AMTaskParams_Base.h"
#include "5AMTaskData_DespawnAICharacter.h"
#include "R5AMTaskParams_DespawnAICharacter.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class R5_API UR5AMTaskParams_DespawnAICharacter : public UR5AMTaskParams_Base {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    F5AMTaskData_DespawnAICharacter Params;
    
public:
    UR5AMTaskParams_DespawnAICharacter();

};


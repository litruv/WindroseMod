#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ActionManager -ObjectName=R5AMTask_Base -FallbackName=R5AMTask_Base
#include "R5AMTask_Base.h"
#include "R5AMTask_DespawnAICharacter.generated.h"

UCLASS(Blueprintable)
class R5_API UR5AMTask_DespawnAICharacter : public UR5AMTask_Base {
    GENERATED_BODY()
public:
    UR5AMTask_DespawnAICharacter();

};


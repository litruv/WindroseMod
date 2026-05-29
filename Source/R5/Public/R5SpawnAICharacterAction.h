#pragma once
#include "CoreMinimal.h"
#include "R5SpawnAICharacterActionData.h"
#include "R5StaticAction.h"
#include "R5SpawnAICharacterAction.generated.h"

UCLASS(Blueprintable)
class R5_API UR5SpawnAICharacterAction : public UR5StaticAction {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5SpawnAICharacterActionData SpawnAICharacterActionData;
    
public:
    UR5SpawnAICharacterAction();

};


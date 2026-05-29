#pragma once
#include "CoreMinimal.h"
#include "R5SpawnActorActionData.h"
#include "R5StaticAction.h"
#include "R5SpawnActorAction.generated.h"

UCLASS(Blueprintable)
class R5_API UR5SpawnActorAction : public UR5StaticAction {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5SpawnActorActionData SpawnActorActionData;
    
public:
    UR5SpawnActorAction();

};


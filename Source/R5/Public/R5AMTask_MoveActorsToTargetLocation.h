#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ActionManager -ObjectName=R5AMTask_Base -FallbackName=R5AMTask_Base
#include "R5AMTask_Base.h"
#include "R5AMTask_MoveActorsToTargetLocation.generated.h"

class AActor;
class AR5EQSActor;

UCLASS(Blueprintable)
class R5_API UR5AMTask_MoveActorsToTargetLocation : public UR5AMTask_Base {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AR5EQSActor* EQSActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> TeleportStack;
    
public:
    UR5AMTask_MoveActorsToTargetLocation();

};


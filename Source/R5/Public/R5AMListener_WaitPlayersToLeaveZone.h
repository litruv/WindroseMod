#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ActionManager -ObjectName=R5AMListener_Base -FallbackName=R5AMListener_Base
#include "R5AMListener_Base.h"
#include "R5AMListener_WaitPlayersToLeaveZone.generated.h"

UCLASS(Blueprintable)
class R5_API UR5AMListener_WaitPlayersToLeaveZone : public UR5AMListener_Base {
    GENERATED_BODY()
public:
    UR5AMListener_WaitPlayersToLeaveZone();

};


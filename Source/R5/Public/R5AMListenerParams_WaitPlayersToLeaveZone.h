#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ActionManager -ObjectName=R5AMListenerParams_Base -FallbackName=R5AMListenerParams_Base
#include "R5AMListenerParams_Base.h"
#include "R5AMListenerData_WaitPlayersToLeaveZone.h"
#include "R5AMListenerParams_WaitPlayersToLeaveZone.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class R5_API UR5AMListenerParams_WaitPlayersToLeaveZone : public UR5AMListenerParams_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AMListenerData_WaitPlayersToLeaveZone Params;
    
    UR5AMListenerParams_WaitPlayersToLeaveZone();

};


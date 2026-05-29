#pragma once
#include "CoreMinimal.h"
#include "R5AMListenerData_WaitTimer.h"
#include "R5AMListenerParams_Base.h"
#include "R5AMListenerParams_WaitTimer.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class R5ACTIONMANAGER_API UR5AMListenerParams_WaitTimer : public UR5AMListenerParams_Base {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AMListenerData_WaitTimer Params;
    
public:
    UR5AMListenerParams_WaitTimer();

};


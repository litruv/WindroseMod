#pragma once
#include "CoreMinimal.h"
#include "R5GetReadyFinishedTaskBase.h"
#include "R5GetReadyFinishedTaskDualWieldModeData.h"
#include "R5GetReadyFinishedTaskDualWieldMode.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5GetReadyFinishedTaskDualWieldMode : public UR5GetReadyFinishedTaskBase {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5GetReadyFinishedTaskDualWieldModeData DualWieldModeData;
    
public:
    UR5GetReadyFinishedTaskDualWieldMode();

};


#pragma once
#include "CoreMinimal.h"
#include "R5PreDeathInstancedTask.h"
#include "R5PreDeathInstancedTask_HideMarker.generated.h"

class UR5HidePawnMarkerTask;

UCLASS(Blueprintable, EditInlineNew)
class UR5PreDeathInstancedTask_HideMarker : public UR5PreDeathInstancedTask {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5HidePawnMarkerTask* HideMarkerTask;
    
public:
    UR5PreDeathInstancedTask_HideMarker();

};


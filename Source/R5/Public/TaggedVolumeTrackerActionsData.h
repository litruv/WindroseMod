#pragma once
#include "CoreMinimal.h"
#include "TaggedVolumeTrackerActionsData.generated.h"

class UR5TaggedVolumeActionBase;

USTRUCT(BlueprintType)
struct FTaggedVolumeTrackerActionsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5TaggedVolumeActionBase*> Actions;
    
    R5_API FTaggedVolumeTrackerActionsData();
};


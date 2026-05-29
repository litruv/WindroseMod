#pragma once
#include "CoreMinimal.h"
#include "R5BuildingGraphExpectedNodeData.generated.h"

class UR5BuildingItem;

USTRUCT(BlueprintType)
struct FR5BuildingGraphExpectedNodeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BuildingItem* BuildingItem;
    
    R5_API FR5BuildingGraphExpectedNodeData();
};


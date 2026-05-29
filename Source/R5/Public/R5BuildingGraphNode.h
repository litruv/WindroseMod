#pragma once
#include "CoreMinimal.h"
#include "R5BuildingGraphNode.generated.h"

class AR5BuildingBlock;
class UR5BuildingItem;

USTRUCT(BlueprintType)
struct FR5BuildingGraphNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AR5BuildingBlock* BuildingBlock;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BuildingItem* BuildingItem;
    
public:
    R5_API FR5BuildingGraphNode();
};


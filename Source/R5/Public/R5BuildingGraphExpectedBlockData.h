#pragma once
#include "CoreMinimal.h"
#include "R5BuildingGraphExpectedBlockData.generated.h"

class AR5BuildingBlock;
class UR5BuildingItem;

USTRUCT(BlueprintType)
struct FR5BuildingGraphExpectedBlockData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BuildingItem* BuildingItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AR5BuildingBlock*> ExistingNeighbours;
    
    R5_API FR5BuildingGraphExpectedBlockData();
};


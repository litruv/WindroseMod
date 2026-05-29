#pragma once
#include "CoreMinimal.h"
#include "R5BuildingGraphNode.h"
#include "R5BuildingGraph.generated.h"

class UR5BLBuildingView;
class UR5BuildingBlockContainer;

USTRUCT(BlueprintType)
struct R5_API FR5BuildingGraph {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BuildingGraphNode> Nodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UR5BuildingBlockContainer> BlockContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLBuildingView* BuildingView;
    
public:
    FR5BuildingGraph();
};


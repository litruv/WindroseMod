#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ReplicationGraph -ObjectName=ReplicationGraphNode -FallbackName=ReplicationGraphNode
#include "ReplicationGraph.h"
#include "ReplicationGraphTypes.h"
#include "R5ReplicationGraphNode_GridSpatialization2D.generated.h"

UCLASS(Blueprintable, NonTransient)
class R5_API UR5ReplicationGraphNode_GridSpatialization2D : public UReplicationGraphNode {
    GENERATED_BODY()
public:
    UR5ReplicationGraphNode_GridSpatialization2D();

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ReplicationGraph -ObjectName=ReplicationGraphNode_AlwaysRelevant_ForConnection -FallbackName=ReplicationGraphNode_AlwaysRelevant_ForConnection
#include "ReplicationGraph.h"
#include "R5ReplicationGraphNode_AlwaysRelevant_ForConnection.generated.h"

UCLASS(Blueprintable, NonTransient)
class UR5ReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_AlwaysRelevant_ForConnection {
    GENERATED_BODY()
public:
    UR5ReplicationGraphNode_AlwaysRelevant_ForConnection();

};


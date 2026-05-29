#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ReplicationGraph -ObjectName=ReplicationGraphNode_ActorList -FallbackName=ReplicationGraphNode_ActorList
#include "ReplicationGraph.h"
#include "R5ReplicationGraphNode_CustomRelevant_ForConnection.generated.h"

UCLASS(Blueprintable, NonTransient)
class R5_API UR5ReplicationGraphNode_CustomRelevant_ForConnection : public UReplicationGraphNode_ActorList {
    GENERATED_BODY()
public:
    UR5ReplicationGraphNode_CustomRelevant_ForConnection();

};


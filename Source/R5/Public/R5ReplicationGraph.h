#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ReplicationGraph -ObjectName=ReplicationGraph -FallbackName=ReplicationGraph
#include "ReplicationGraph.h"
#include "EClassRepPolicy.h"
#include "R5ReplicationGraph.generated.h"

class AActor;
class UR5ReplicationGraphNode_GridSpatialization2D;
class UReplicationGraphNode;
class UReplicationGraphNode_ActorList;

UCLASS(Blueprintable, NonTransient)
class R5_API UR5ReplicationGraph : public UReplicationGraph {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ReplicationGraphNode_GridSpatialization2D* GridNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplicationGraphNode_ActorList* AlwaysRelevantNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UReplicationGraphNode*> CustomRelevantGraphNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> CustomRelevantActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AActor>, EClassRepPolicy> ClassRepPolicies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UClass*, EClassRepPolicy> CachedRepPolicies;
    
public:
    UR5ReplicationGraph();

};


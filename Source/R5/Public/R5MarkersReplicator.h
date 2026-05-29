#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "R5MarkersReplicator.generated.h"

class UR5MarkersReplicationComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5MarkersReplicator : public AInfo {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5MarkersReplicationComponent* replicationComponent;
    
public:
    AR5MarkersReplicator(const FObjectInitializer& ObjectInitializer);

};


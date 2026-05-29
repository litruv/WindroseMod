#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "Misc/Guid.h"
#include "GCFSMSnapshotData.generated.h"

class UGCFSMSnapshot;

USTRUCT(BlueprintType)
struct FGCFSMSnapshotData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UGCFSMSnapshot*> stateHistories;
    
    GCFSM_API FGCFSMSnapshotData();
};


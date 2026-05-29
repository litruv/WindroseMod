#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
#include "R5MetaProxy_DevIslandEntry.generated.h"

class IR5MetaProxy_StartWorld;
class UR5MetaProxy_StartWorld;

USTRUCT(BlueprintType)
struct R5METAPROXY_API FR5MetaProxy_DevIslandEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordId CommonIslandId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordId islandId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IR5MetaProxy_StartWorld> StartWorldInterface;
    
    FR5MetaProxy_DevIslandEntry();
};


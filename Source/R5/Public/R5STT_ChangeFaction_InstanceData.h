#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Relationship -ObjectName=ER5Faction -FallbackName=ER5Faction
#include "ER5Faction.h"
#include "R5STT_ChangeFaction_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STT_ChangeFaction_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<ER5Faction> FactionFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangeToDefaults;
    
    FR5STT_ChangeFaction_InstanceData();
};


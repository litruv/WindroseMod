#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5JsonAssets -ObjectName=R5JsonRuntimeDA -FallbackName=R5JsonRuntimeDA
#include "R5JsonRuntimeDA.h"
#include "R5NPCData.h"
#include "R5NPCParams.generated.h"

class UR5BLInventoryItem;

UCLASS(Blueprintable, NonTransient)
class R5_API UR5NPCParams : public UR5JsonRuntimeDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLInventoryItem> NPCItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5NPCData NPCData;
    
    UR5NPCParams();

};


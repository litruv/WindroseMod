#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5AgentSystem -ObjectName=R5AS_UObjectValueSelector -FallbackName=R5AS_UObjectValueSelector
#include "R5AS_UObjectValueSelector.h"
#include "R5BattleManager_TagTokensReserveData.h"
#include "R5STT_ReserveTagTokenWithRandomTime_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STT_ReserveTagTokenWithRandomTime_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AS_UObjectValueSelector TargetSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BattleManager_TagTokensReserveData TagTokensReserveData;
    
    FR5STT_ReserveTagTokenWithRandomTime_InstanceData();
};


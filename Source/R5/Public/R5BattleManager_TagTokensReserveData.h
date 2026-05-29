#pragma once
#include "CoreMinimal.h"
#include "R5BattleManager_TagTokenReserveData.h"
#include "R5BattleManager_TagTokensReserveData.generated.h"

USTRUCT(BlueprintType)
struct FR5BattleManager_TagTokensReserveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BattleManager_TagTokenReserveData> TagTokensData;
    
    R5_API FR5BattleManager_TagTokensReserveData();
};


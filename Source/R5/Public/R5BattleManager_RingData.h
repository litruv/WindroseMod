#pragma once
#include "CoreMinimal.h"
#include "R5BattleManager_RingData.generated.h"

USTRUCT(BlueprintType)
struct FR5BattleManager_RingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RingRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CountPointsInRing;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 RingRadiusDeviation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 RingPointDeviationHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToRebuildRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToRebuildRingRandomDeviation;
    
    R5_API FR5BattleManager_RingData();
};


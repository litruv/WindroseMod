#pragma once
#include "CoreMinimal.h"
#include "R5DamageByEventAbilityData.generated.h"

class UR5DamageGEParams;
class UR5WeaponTraceByEventParams;

USTRUCT(BlueprintType)
struct FR5DamageByEventAbilityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5WeaponTraceByEventParams* TraceParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5DamageGEParams* DamageParams;
    
    R5_API FR5DamageByEventAbilityData();
};


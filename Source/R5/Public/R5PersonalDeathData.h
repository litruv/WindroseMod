#pragma once
#include "CoreMinimal.h"
#include "DeathBreakConstraintData.h"
#include "R5DamageTypeEffectData.h"
#include "R5PersonalDeathData.generated.h"

USTRUCT(BlueprintType)
struct FR5PersonalDeathData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5DamageTypeEffectData> DamageEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeathBreakConstraintData BreakConstraintData;
    
    R5_API FR5PersonalDeathData();
};


#pragma once
#include "CoreMinimal.h"
#include "R5AIWDSCombatDifficultyData.generated.h"

class UR5AIMeleeComboParams;

USTRUCT(BlueprintType)
struct R5_API FR5AIWDSCombatDifficultyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CombatDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AIMeleeComboParams* ComboParams;
    
    FR5AIWDSCombatDifficultyData();
};


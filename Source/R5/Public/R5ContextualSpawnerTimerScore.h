#pragma once
#include "CoreMinimal.h"
#include "R5ContextualSpawnerTargetWhitelist.h"
#include "R5ContextualSpawnerTimerScore.generated.h"

class UR5ContextualSpawnerParticipantCondition;

USTRUCT(BlueprintType)
struct FR5ContextualSpawnerTimerScore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Period;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasAvatarWhitelist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ContextualSpawnerTargetWhitelist AvatarWhitelist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ContextualSpawnerParticipantCondition* Condition;
    
    R5_API FR5ContextualSpawnerTimerScore();
};


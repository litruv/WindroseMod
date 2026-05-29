#pragma once
#include "CoreMinimal.h"
#include "R5LevelUpInfo.generated.h"

USTRUCT(BlueprintType)
struct FR5LevelUpInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelsUpped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TalentPointsAdded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StatPointsAdded;
    
    R5ENTITYPROGRESSION_API FR5LevelUpInfo();
};


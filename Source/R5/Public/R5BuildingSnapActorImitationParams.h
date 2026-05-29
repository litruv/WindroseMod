#pragma once
#include "CoreMinimal.h"
#include "R5BuildingSnapActorImitationParams.generated.h"

class UR5BuildingItem;

USTRUCT(BlueprintType)
struct R5_API FR5BuildingSnapActorImitationParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BuildingItem* BuildingItem;
    
    FR5BuildingSnapActorImitationParams();
};


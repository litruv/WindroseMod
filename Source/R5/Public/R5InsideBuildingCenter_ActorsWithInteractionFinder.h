#pragma once
#include "CoreMinimal.h"
#include "R5ActorsWithInteractionFinder.h"
#include "R5InsideBuildingCenter_ActorsWithInteractionFinder.generated.h"

USTRUCT(BlueprintType)
struct FR5InsideBuildingCenter_ActorsWithInteractionFinder : public FR5ActorsWithInteractionFinder {
    GENERATED_BODY()
public:
    R5_API FR5InsideBuildingCenter_ActorsWithInteractionFinder();
};


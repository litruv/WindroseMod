#pragma once
#include "CoreMinimal.h"
#include "R5ActorsWithInteractionFinder.h"
#include "R5InsideRadius_ActorsWithInteractionFinder.generated.h"

USTRUCT(BlueprintType)
struct FR5InsideRadius_ActorsWithInteractionFinder : public FR5ActorsWithInteractionFinder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    R5_API FR5InsideRadius_ActorsWithInteractionFinder();
};


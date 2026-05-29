#pragma once
#include "CoreMinimal.h"
#include "MovementIntention.generated.h"

USTRUCT(BlueprintType)
struct FMovementIntention {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bWantSprint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bWantWalk: 1;
    
    R5_API FMovementIntention();
};


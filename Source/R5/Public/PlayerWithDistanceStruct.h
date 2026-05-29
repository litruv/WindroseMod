#pragma once
#include "CoreMinimal.h"
#include "PlayerWithDistanceStruct.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPlayerWithDistanceStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PlayerActor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DistanceToPlayer;
    
    R5_API FPlayerWithDistanceStruct();
};


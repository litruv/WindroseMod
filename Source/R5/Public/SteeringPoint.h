#pragma once
#include "CoreMinimal.h"
#include "SteeringPoint.generated.h"

USTRUCT(BlueprintType)
struct FSteeringPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    R5_API FSteeringPoint();
};


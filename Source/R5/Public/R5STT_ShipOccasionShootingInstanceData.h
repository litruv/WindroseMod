#pragma once
#include "CoreMinimal.h"
#include "R5STT_ShipOccasionShootingInstanceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct R5_API FR5STT_ShipOccasionShootingInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    FR5STT_ShipOccasionShootingInstanceData();
};


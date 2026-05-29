#pragma once
#include "CoreMinimal.h"
#include "R5BuildingSpawnRequest.generated.h"

class AActor;
class UR5BuildingBrush;

USTRUCT(BlueprintType)
struct FR5BuildingSpawnRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BuildingBrush* BuildingBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PoiActor;
    
    R5_API FR5BuildingSpawnRequest();
};


#pragma once
#include "CoreMinimal.h"
#include "R5SeaSpawnPoint.generated.h"

class AActor;
class UObject;

USTRUCT(BlueprintType)
struct FR5SeaSpawnPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpawnedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UObject*> PreLoadedObjects;
    
    R5_API FR5SeaSpawnPoint();
};


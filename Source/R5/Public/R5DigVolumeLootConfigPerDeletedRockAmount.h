#pragma once
#include "CoreMinimal.h"
#include "R5DigVolumeLootData.h"
#include "R5DigVolumeLootConfigPerDeletedRockAmount.generated.h"

class UR5SpawnLootSetup;

USTRUCT(BlueprintType)
struct FR5DigVolumeLootConfigPerDeletedRockAmount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfRocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5DigVolumeLootData> Loot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5SpawnLootSetup* DestroyLootSpawnSetup;
    
    R5_API FR5DigVolumeLootConfigPerDeletedRockAmount();
};


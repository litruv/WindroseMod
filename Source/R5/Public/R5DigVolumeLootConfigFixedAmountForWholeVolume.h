#pragma once
#include "CoreMinimal.h"
#include "R5DigVolumeLootData.h"
#include "R5DigVolumeLootDataWholeVolume.h"
#include "R5DigVolumeLootConfigFixedAmountForWholeVolume.generated.h"

class UR5SpawnLootSetup;

USTRUCT(BlueprintType)
struct FR5DigVolumeLootConfigFixedAmountForWholeVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5DigVolumeLootDataWholeVolume> GuaranteedLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5DigVolumeLootData> ChanceLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5SpawnLootSetup* DestroyLootSpawnSetup;
    
    R5_API FR5DigVolumeLootConfigFixedAmountForWholeVolume();
};


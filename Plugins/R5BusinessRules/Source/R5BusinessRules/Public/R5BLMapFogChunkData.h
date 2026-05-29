#pragma once
#include "CoreMinimal.h"
#include "R5BLMapFogChunkData.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLMapFogChunkData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChunkIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChunkValue;
    
    FR5BLMapFogChunkData();
};


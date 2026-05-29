#pragma once
#include "CoreMinimal.h"
#include "R5SpawnPointTransformData.generated.h"

class UEnvQuery;

USTRUCT(BlueprintType)
struct FR5SpawnPointTransformData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* QueryTemplate;
    
    R5_API FR5SpawnPointTransformData();
};


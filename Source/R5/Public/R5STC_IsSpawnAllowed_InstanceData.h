#pragma once
#include "CoreMinimal.h"
#include "R5STC_IsSpawnAllowed_InstanceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct R5_API FR5STC_IsSpawnAllowed_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    FR5STC_IsSpawnAllowed_InstanceData();
};


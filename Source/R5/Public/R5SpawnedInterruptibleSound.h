#pragma once
#include "CoreMinimal.h"
#include "R5SpawnedInterruptibleSound.generated.h"

class UAudioComponent;

USTRUCT(BlueprintType)
struct FR5SpawnedInterruptibleSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAudioComponent*> SpawnedSounds;
    
    R5_API FR5SpawnedInterruptibleSound();
};


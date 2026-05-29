#pragma once
#include "CoreMinimal.h"
#include "R5SpawnerMutatorChain.generated.h"

class UR5SpawnerMutator;

USTRUCT(BlueprintType)
struct R5_API FR5SpawnerMutatorChain {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5SpawnerMutator*> Mutators;
    
public:
    FR5SpawnerMutatorChain();
};


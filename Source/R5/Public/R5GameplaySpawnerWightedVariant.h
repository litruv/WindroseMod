#pragma once
#include "CoreMinimal.h"
#include "R5GameplaySpawnerVariant.h"
#include "R5GameplaySpawnerWightedVariant.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5GameplaySpawnerWightedVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5GameplaySpawnerVariant> Collection;
    
    FR5GameplaySpawnerWightedVariant();
};


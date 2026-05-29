#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Int32Interval -FallbackName=Int32Interval
#include "ER5ContextualSpawnerPlaceType.h"
#include "R5GameplaySpawnerVariant.h"
#include "R5ContextualSpawnerWeightedEntities.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct R5_API FR5ContextualSpawnerWeightedEntities {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5ContextualSpawnerPlaceType Place;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceAggressive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5GameplaySpawnerVariant> Variants;
    
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AActor>, FInt32Interval> Map;
    
public:
    FR5ContextualSpawnerWeightedEntities();
};


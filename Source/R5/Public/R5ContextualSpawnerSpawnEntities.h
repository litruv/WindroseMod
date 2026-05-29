#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Nature -ObjectName=R5NamedDayCycleTime -FallbackName=R5NamedDayCycleTime
#include "R5NamedDayCycleTime.h"
#include "R5ContextualSpawnerWeightedEntities.h"
#include "R5ContextualSpawnerSpawnEntities.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5ContextualSpawnerSpawnEntities {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer WaterAreaTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5NamedDayCycleTime> OverrideDayCycleTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5ContextualSpawnerWeightedEntities> WeightedEntities;
    
    FR5ContextualSpawnerSpawnEntities();
};


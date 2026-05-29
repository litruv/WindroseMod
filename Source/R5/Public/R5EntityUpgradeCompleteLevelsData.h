#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Math/Transform.h"
#include "ER5EntitySpawnMethod.h"
#include "R5EntityUpgradeCompleteLevelsData.generated.h"

class AActor;
class UEnvQuery;

USTRUCT(BlueprintType)
struct FR5EntityUpgradeCompleteLevelsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ActorToSpawn;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5EntitySpawnMethod EntitySpawnMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SpawnTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* QueryTemplate;
    
    R5_API FR5EntityUpgradeCompleteLevelsData();
};


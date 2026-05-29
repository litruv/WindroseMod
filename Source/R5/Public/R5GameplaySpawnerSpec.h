#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=RandomStream -FallbackName=RandomStream
#include "ER5GameplaySpawnerState.h"
#include "R5GameplaySpawnContext.h"
#include "R5GameplaySpawnerDefinition.h"
#include "R5GameplaySpawnerSpec.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5GameplaySpawnerSpec {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5GameplaySpawnerDefinition Definition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5GameplaySpawnerState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandomStream RandomStream;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5GameplaySpawnContext SpawnContext;
    
    FR5GameplaySpawnerSpec();
};


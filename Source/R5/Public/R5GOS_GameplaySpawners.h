#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GameplayOrchestrator -ObjectName=R5GameplayOrchestratorSubsystem -FallbackName=R5GameplayOrchestratorSubsystem
#include "R5GameplayOrchestratorSubsystem.h"
#include "R5GameplaySpawnerSpec.h"
#include "R5GOS_GameplaySpawners.generated.h"

UCLASS(Blueprintable, Config=Engine)
class R5_API UR5GOS_GameplaySpawners : public UR5GameplayOrchestratorSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HalfActivitySpawnRadiusThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FR5BLRecordId, FR5GameplaySpawnerSpec> SpawnSpecs;
    
public:
    UR5GOS_GameplaySpawners();

};


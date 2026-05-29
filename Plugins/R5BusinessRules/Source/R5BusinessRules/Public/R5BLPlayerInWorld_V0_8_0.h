#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ViewControllers -ObjectName=R5BLVersionedRecord -FallbackName=R5BLVersionedRecord
#include "R5BLVersionedRecord.h"
#include "R5BLMapFogChunkData_V0_8_0.h"
#include "R5BLPlayerSpawnData_V0_8_0.h"
#include "R5BLScenarioSave_V0_8_0.h"
#include "R5BLUserMarker_V0_8_0.h"
#include "R5BLPlayerInWorld_V0_8_0.generated.h"

UCLASS(Blueprintable, NonTransient)
class R5BUSINESSRULES_API UR5BLPlayerInWorld_V0_8_0 : public UR5BLVersionedRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordId islandId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordId PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLScenarioSave_V0_8_0 ScenarioSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLUserMarker_V0_8_0> UserMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLMapFogChunkData_V0_8_0> MapFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLPlayerSpawnData_V0_8_0 SpawnLocations;
    
    UR5BLPlayerInWorld_V0_8_0();

};


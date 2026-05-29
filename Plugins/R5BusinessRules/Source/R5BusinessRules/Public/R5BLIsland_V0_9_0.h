#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ViewControllers -ObjectName=R5BLVersionedRecord -FallbackName=R5BLVersionedRecord
#include "R5BLVersionedRecord.h"
#include "R5BLLootMetaData_V0_9_0.h"
#include "R5BLScenarioSave_V0_9_0.h"
#include "R5BLTerrainPatch_V0_9_0.h"
#include "R5BLTerrain_V0_9_0.h"
#include "R5BLIsland_V0_9_0.generated.h"

class UR5BLCommonIsland;

UCLASS(Blueprintable, NonTransient)
class R5BUSINESSRULES_API UR5BLIsland_V0_9_0 : public UR5BLVersionedRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLCommonIsland> CommonIsland;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FixedRandomNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WorldGeneratorVersion;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 CreationMoment;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LiveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLRecordId> Actor_InteractedPoiIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLRecordId> Actor_RemovedDialogueActorIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLTerrainPatch_V0_9_0 LastTerrainPatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLTerrain_V0_9_0> Terrains;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLScenarioSave_V0_9_0 ScenarioSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLLootMetaData_V0_9_0 LootTableMetaData;
    
    UR5BLIsland_V0_9_0();

};


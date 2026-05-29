#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ViewControllers -ObjectName=R5BLVersionedRecord -FallbackName=R5BLVersionedRecord
#include "R5BLVersionedRecord.h"
#include "R5BLLootMetaData.h"
#include "R5BLScenarioSave.h"
#include "R5BLTerrain.h"
#include "R5BLTerrainPatch.h"
#include "R5BLIsland.generated.h"

class UR5BLCommonIsland;

UCLASS(Blueprintable, NonTransient)
class R5BUSINESSRULES_API UR5BLIsland : public UR5BLVersionedRecord {
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
    FR5BLTerrainPatch LastTerrainPatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLTerrain> Terrains;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLScenarioSave ScenarioSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLLootMetaData LootTableMetaData;
    
    UR5BLIsland();

};


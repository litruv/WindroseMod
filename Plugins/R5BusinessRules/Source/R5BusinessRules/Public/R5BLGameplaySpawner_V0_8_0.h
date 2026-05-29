#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "Misc/DateTime.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ViewControllers -ObjectName=R5BLVersionedRecord -FallbackName=R5BLVersionedRecord
#include "R5BLVersionedRecord.h"
#include "R5BLGameplaySpawner_V0_8_0.generated.h"

UCLASS(Blueprintable, NonTransient)
class R5BUSINESSRULES_API UR5BLGameplaySpawner_V0_8_0 : public UR5BLVersionedRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordId islandId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> DestroyedEntities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RespawnScheduled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime RespawnPendingTimestampUtc;
    
    UR5BLGameplaySpawner_V0_8_0();

};


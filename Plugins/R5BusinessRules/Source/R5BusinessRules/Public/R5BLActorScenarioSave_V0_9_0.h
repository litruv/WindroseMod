#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ViewControllers -ObjectName=R5BLVersionedRecord -FallbackName=R5BLVersionedRecord
#include "R5BLVersionedRecord.h"
#include "R5BLScenarioSave_V0_9_0.h"
#include "R5BLActorScenarioSave_V0_9_0.generated.h"

UCLASS(Blueprintable, NonTransient)
class R5BUSINESSRULES_API UR5BLActorScenarioSave_V0_9_0 : public UR5BLVersionedRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordId islandId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLScenarioSave_V0_9_0 ScenarioSave;
    
    UR5BLActorScenarioSave_V0_9_0();

};


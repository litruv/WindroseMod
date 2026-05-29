#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ViewControllers -ObjectName=R5BLVersionedRecord -FallbackName=R5BLVersionedRecord
#include "R5BLVersionedRecord.h"
#include "R5BLAccountGameSettings_V0_9_0.h"
#include "R5BLAccountMetaData_V0_9_0.h"
#include "R5BLCoopFavoriteServer_V0_9_0.h"
#include "R5BLInventory_V0_9_0.h"
#include "R5BLScenarioSave_V0_9_0.h"
#include "R5BLAccount_V0_9_0.generated.h"

class UR5BLAccountBan_V0_9_0;

UCLASS(Blueprintable, NonTransient)
class R5BUSINESSRULES_API UR5BLAccount_V0_9_0 : public UR5BLVersionedRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordId DefaultPlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5BLAccountBan_V0_9_0*> Bans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AccessGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLAccountGameSettings_V0_9_0 AccountGameSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLAccountMetaData_V0_9_0 AccountMetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLInventory_V0_9_0 AccountInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLCoopFavoriteServer_V0_9_0> FavoriteCoopServers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLScenarioSave_V0_9_0 ScenarioSave;
    
    UR5BLAccount_V0_9_0();

};


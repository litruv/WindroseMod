#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
#include "R5IslandReviveData.h"
#include "R5ReviveData.generated.h"

USTRUCT(BlueprintType)
struct FR5ReviveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FR5BLRecordId, FR5IslandReviveData> IslandRevivesData;
    
    R5_API FR5ReviveData();
};


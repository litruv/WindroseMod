#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5ConsecutiveTagEventsData.h"
#include "R5ConsecutiveTagEventsParams.generated.h"

UCLASS(Blueprintable)
class R5GAS_API UR5ConsecutiveTagEventsParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ConsecutiveTagEventsData Data;
    
    UR5ConsecutiveTagEventsParams();

};


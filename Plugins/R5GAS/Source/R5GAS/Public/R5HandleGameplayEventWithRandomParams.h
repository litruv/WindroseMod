#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5HandleGameplayEventWithRandomData.h"
#include "R5HandleGameplayEventWithRandomEventData.h"
#include "R5HandleGameplayEventWithRandomParams.generated.h"

UCLASS(Blueprintable)
class R5GAS_API UR5HandleGameplayEventWithRandomParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5HandleGameplayEventWithRandomData RandomData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5HandleGameplayEventWithRandomEventData EventData;
    
    UR5HandleGameplayEventWithRandomParams();

};


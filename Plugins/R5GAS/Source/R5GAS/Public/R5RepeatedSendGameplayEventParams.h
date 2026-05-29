#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5RepeatedSendGameplayEventData.h"
#include "R5RepeatedSendGameplayEventParams.generated.h"

UCLASS(Blueprintable)
class R5GAS_API UR5RepeatedSendGameplayEventParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5RepeatedSendGameplayEventData Data;
    
    UR5RepeatedSendGameplayEventParams();

};


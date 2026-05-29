#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5NoDamageHandleGameplayEventRequirements.h"
#include "R5NoDamageHandleGameplayEventTriggerData.h"
#include "R5NoDamageHandleGameplayEventParams.generated.h"

UCLASS(Blueprintable)
class R5GAS_API UR5NoDamageHandleGameplayEventParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5NoDamageHandleGameplayEventRequirements Requirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5NoDamageHandleGameplayEventTriggerData TriggerData;
    
    UR5NoDamageHandleGameplayEventParams();

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5HandleGameplayEventForConsecutiveHitsDamageFilter.h"
#include "R5HandleGameplayEventForConsecutiveHitsTriggerData.h"
#include "R5HandleGameplayEventForConsecutiveHitsParams.generated.h"

UCLASS(Blueprintable)
class R5GAS_API UR5HandleGameplayEventForConsecutiveHitsParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5HandleGameplayEventForConsecutiveHitsDamageFilter DamageFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5HandleGameplayEventForConsecutiveHitsTriggerData TriggerData;
    
    UR5HandleGameplayEventForConsecutiveHitsParams();

};


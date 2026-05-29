#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5TemporalHealthDealDamageData.h"
#include "R5TemporalHealthTakeDamageData.h"
#include "R5TemporalHealthParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5TemporalHealthParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5TemporalHealthTakeDamageData TakeDamageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5TemporalHealthDealDamageData DealDamageData;
    
    UR5TemporalHealthParams();

};


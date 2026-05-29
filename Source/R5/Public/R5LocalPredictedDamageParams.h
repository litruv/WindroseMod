#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5LocalPredictedDamageData.h"
#include "R5LocalPredictedDamageParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5LocalPredictedDamageParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5LocalPredictedDamageData Data;
    
    UR5LocalPredictedDamageParams();

};


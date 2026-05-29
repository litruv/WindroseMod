#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5RecallAbilityData.h"
#include "R5RecallAbilityParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5RecallAbilityParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5RecallAbilityData Data;
    
    UR5RecallAbilityParams();

};


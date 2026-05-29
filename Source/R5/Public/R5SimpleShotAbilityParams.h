#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5SimpleShotAbilityData.h"
#include "R5SimpleShotAbilityParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5SimpleShotAbilityParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5SimpleShotAbilityData Data;
    
    UR5SimpleShotAbilityParams();

};


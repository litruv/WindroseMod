#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5DamageTargetsAndHealData.h"
#include "R5DamageTargetsAndHealParams.generated.h"

class UR5AS_EnvironmentRequestParams;

UCLASS(Blueprintable)
class R5_API UR5DamageTargetsAndHealParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5DamageTargetsAndHealData Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AS_EnvironmentRequestParams* FindTargetParams;
    
    UR5DamageTargetsAndHealParams();

};


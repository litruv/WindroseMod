#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5ApplyGameplayEffectOnTargetGPData.h"
#include "R5ApplyGameplayEffectOnTargetTechData.h"
#include "R5ApplyGameplayEffectOnTargetParams.generated.h"

class UR5AS_EnvironmentRequestParams;

UCLASS(Blueprintable)
class R5_API UR5ApplyGameplayEffectOnTargetParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AS_EnvironmentRequestParams* RequestParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ApplyGameplayEffectOnTargetGPData GPData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ApplyGameplayEffectOnTargetTechData TechData;
    
    UR5ApplyGameplayEffectOnTargetParams();

};


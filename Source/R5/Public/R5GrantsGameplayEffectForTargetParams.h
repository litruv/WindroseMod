#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5GrantsGameplayEffectForTargetGEData.h"
#include "R5GrantsGameplayEffectForTargetGameplayData.h"
#include "R5GrantsGameplayEffectForTargetParams.generated.h"

class UR5AS_EnvironmentRequestParams;

UCLASS(Blueprintable)
class R5_API UR5GrantsGameplayEffectForTargetParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AS_EnvironmentRequestParams* AgentRequestParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5GrantsGameplayEffectForTargetGEData GEData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5GrantsGameplayEffectForTargetGameplayData GameplayData;
    
    UR5GrantsGameplayEffectForTargetParams();

};


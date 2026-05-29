#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5TransitionToInteractionGPData.h"
#include "R5TransitionToInteractionAbilityParams.generated.h"

class UR5SearchInteractionInRadiusParams;
class UR5TransitionToInteractionTransitionParams;

UCLASS(Blueprintable)
class R5_API UR5TransitionToInteractionAbilityParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5SearchInteractionInRadiusParams* SearchInteractTaskParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5TransitionToInteractionGPData GPData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5TransitionToInteractionTransitionParams* TransitionParams;
    
    UR5TransitionToInteractionAbilityParams();

};


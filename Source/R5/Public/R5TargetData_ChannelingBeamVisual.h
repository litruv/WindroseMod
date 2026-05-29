#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbilityTargetData -FallbackName=GameplayAbilityTargetData
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "R5TargetData_ChannelingBeamVisual.generated.h"

class UCurveVector;
class UR5ChannelingBeamFXParams;

USTRUCT(BlueprintType)
struct R5_API FR5TargetData_ChannelingBeamVisual : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ChannelingBeamFXParams* FXParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* AdditionalRotationByTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ServerStartTime;
    
    FR5TargetData_ChannelingBeamVisual();
};


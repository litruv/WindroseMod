#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "Engine/DeveloperSettings.h"
#include "R5PointLightTierSettings.h"
#include "R5PointLightBalancerSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=R5PointLightBalancerSettings)
class R5POINTLIGHTBALANCER_API UR5PointLightBalancerSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5PointLightTierSettings> TierSettings;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NumNeighboursDeactivationThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MergeDistance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomizeLightTiers;
    
    UR5PointLightBalancerSettings();

};


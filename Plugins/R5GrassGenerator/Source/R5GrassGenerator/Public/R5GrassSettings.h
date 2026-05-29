#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "Engine/DeveloperSettings.h"
#include "R5GrassSettings.generated.h"

class UR5GrassPreset;

UCLASS(Blueprintable, DefaultConfig, Config=R5GrassSettings)
class R5GRASSGENERATOR_API UR5GrassSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAdvancedGrass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWorldPositionOffsetWritesVelocity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SupportPrimitiveAlphaHoldout;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGrassQualityLevelEnable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5GrassPreset> DefaultGrassPreset;
    
public:
    UR5GrassSettings();

};


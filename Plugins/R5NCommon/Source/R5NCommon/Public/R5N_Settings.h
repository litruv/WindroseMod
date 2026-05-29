#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettingsBackedByCVars -FallbackName=DeveloperSettingsBackedByCVars
#include "Engine/DeveloperSettingsBackedByCVars.h"
#include "R5N_CubiclesSettings.h"
#include "R5N_DayCycleTimeSettings.h"
#include "R5N_DeformingTrailSettings.h"
#include "R5N_DensitySettings.h"
#include "R5N_GlobalWaterSettings.h"
#include "R5N_GlobalWindSettings.h"
#include "R5N_MasksSettings.h"
#include "R5N_ParticlesSettings.h"
#include "R5N_SurfaceTrailsSettings.h"
#include "R5N_WeatherInDoorSettings.h"
#include "R5N_WeatherSettings.h"
#include "R5N_WindDataSettings.h"
#include "R5N_Settings.generated.h"

class UMaterialParameterCollection;

UCLASS(Blueprintable, DefaultConfig, Config=R5NatureSettings)
class R5NCOMMON_API UR5N_Settings : public UDeveloperSettingsBackedByCVars {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5N_DensitySettings DensitySettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5N_WindDataSettings WindDataSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5N_GlobalWindSettings GlobalWindSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5N_DeformingTrailSettings DeformingTrailSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5N_CubiclesSettings CubiclesSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5N_DayCycleTimeSettings DayCycleTimeSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5N_SurfaceTrailsSettings SurfaceTrailsSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5N_GlobalWaterSettings GlobalWaterSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5N_WeatherSettings WeatherSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5N_WeatherInDoorSettings WeatherInDoorSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5N_MasksSettings MasksSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5N_ParticlesSettings ParticlesSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialParameterCollection> NatureMPC;
    
    UR5N_Settings();

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "R5NatureSettingsActor.generated.h"

class UMaterialInstance;
class UR5N_DayCycleTimeSettingsComponent;
class UR5N_EnvironmentParticlesSettingsComponent;
class UR5N_WeatherSettingsComponent;

UCLASS(Blueprintable, NoExport)
class R5NATURE_API AR5NatureSettingsActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* LightFunctionOverride;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5N_DayCycleTimeSettingsComponent* DayCycleSettingsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5N_WeatherSettingsComponent* WeatherSettingsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5N_EnvironmentParticlesSettingsComponent* EnvironmentParticlesSettingsComponent;
    
public:
    AR5NatureSettingsActor(const FObjectInitializer& ObjectInitializer);

};


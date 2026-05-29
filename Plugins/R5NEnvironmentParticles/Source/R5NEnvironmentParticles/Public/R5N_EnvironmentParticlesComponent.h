#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5N_EnvironmentParticlesComponent.generated.h"

class UObject;
class UR5N_EnvironmentParticlesComponent;
class UR5N_EnvironmentParticlesSettingsComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5NENVIRONMENTPARTICLES_API UR5N_EnvironmentParticlesComponent : public UActorComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UR5N_EnvironmentParticlesSettingsComponent> Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSet<UStaticMeshComponent*> FloraParticleMeshesGCTracker;
    
public:
    UR5N_EnvironmentParticlesComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static UR5N_EnvironmentParticlesComponent* Get(const UObject* Wco);
    
};


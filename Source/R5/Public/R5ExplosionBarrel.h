#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GameplayOrchestrator -ObjectName=R5InstantiableActor -FallbackName=R5InstantiableActor
#include "R5InstantiableActor.h"
#include "R5GameplayEffectProxyInterface.h"
#include "R5ExplosionBarrel.generated.h"

class UR5CarryComponent;
class UR5ExplosionBarrelParams;
class UR5ExplosionReactionComponent;
class UR5NewOverlapDamageComponent;
class UR5SimpleFoliageGameplayEffectProxyComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable, NoExport, Config=Engine)
class R5_API AR5ExplosionBarrel : public AR5InstantiableActor, public IR5GameplayEffectProxyInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5NewOverlapDamageComponent* OverlapDamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ExplosionReactionComponent* ExplosionReactionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5SimpleFoliageGameplayEffectProxyComponent* GEProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CarryComponent* CarryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ExplosionBarrelParams* Params;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NetCullDistance;
    
public:
    AR5ExplosionBarrel(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};


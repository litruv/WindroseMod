#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Math/Transform.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "R5ChestActor.h"
#include "R5PosthumousContainer.generated.h"

class UNiagaraSystem;
class UR5MarkerModelBase;
class UR5NPhysComponent;
class USoundCue;

UCLASS(Blueprintable, NoExport)
class R5_API AR5PosthumousContainer : public AR5ChestActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5NPhysComponent* NPhysComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* SpawnContainerVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* DestroyContainerVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* SpawnContainerSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* DestroyContainerSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UR5MarkerModelBase> DeathMarkerClass;
    
public:
    AR5PosthumousContainer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void PlayCosmetics(bool bIsDestroyed) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnNPhysStopped(const FHitResult& HitResult);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastSetActorTransform(const FTransform& NewTransform);
    
};


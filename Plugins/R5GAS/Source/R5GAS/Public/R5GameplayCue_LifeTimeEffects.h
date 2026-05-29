#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayCueNotify_Actor -FallbackName=GameplayCueNotify_Actor
#include "GameplayCueNotify_Actor.h"
#include "R5GameplayCue_LifeTimeEffects.generated.h"

class AActor;
class UNiagaraComponent;
class UNiagaraSystem;

UCLASS(Blueprintable, NoExport)
class R5GAS_API AR5GameplayCue_LifeTimeEffects : public AGameplayCueNotify_Actor {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HideOnSpawnDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDurationRatioToSpawnFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HideMeshTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* OnSpawnSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* OnDespawnSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* SpawnedNS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
public:
    AR5GameplayCue_LifeTimeEffects(const FObjectInitializer& ObjectInitializer);

};


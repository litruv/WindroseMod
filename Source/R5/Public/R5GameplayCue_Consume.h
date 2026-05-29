#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayCueNotify_Actor -FallbackName=GameplayCueNotify_Actor
#include "GameplayCueNotify_Actor.h"
#include "R5GameplayCue_Consume.generated.h"

class UAudioComponent;
class UNiagaraComponent;
class UR5ConsumeEffectData;
class UStaticMeshComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5GameplayCue_Consume : public AGameplayCueNotify_Actor {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ConsumeEffectData* ConsumeEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> SpawnedParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> SpawnedMeshes;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* ActiveSoundEffect;
    
public:
    AR5GameplayCue_Consume(const FObjectInitializer& ObjectInitializer);

};


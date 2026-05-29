#pragma once
#include "CoreMinimal.h"
#include "R5AMActivatedContextActor.h"
#include "R5AMEffectSpawnerContextActor.generated.h"

class UNiagaraComponent;
class UNiagaraSystem;

UCLASS(Blueprintable, NoExport)
class R5ACTIONMANAGER_API AR5AMEffectSpawnerContextActor : public AR5AMActivatedContextActor {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> VFX;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> SpawnedVFX;
    
public:
    AR5AMEffectSpawnerContextActor(const FObjectInitializer& ObjectInitializer);

};


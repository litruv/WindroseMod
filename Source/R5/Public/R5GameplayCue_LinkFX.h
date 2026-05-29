#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayCueNotify_Actor -FallbackName=GameplayCueNotify_Actor
#include "GameplayCueNotify_Actor.h"
#include "R5GameplayCue_LinkFX.generated.h"

class UNiagaraComponent;
class UR5GameplayCue_LinkFXParams;

UCLASS(Blueprintable, NoExport)
class R5_API AR5GameplayCue_LinkFX : public AGameplayCueNotify_Actor {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5GameplayCue_LinkFXParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* SpawnedVFX;
    
public:
    AR5GameplayCue_LinkFX(const FObjectInitializer& ObjectInitializer);

};


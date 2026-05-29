#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayCueNotify_Actor -FallbackName=GameplayCueNotify_Actor
#include "GameplayCueNotify_Actor.h"
#include "R5TargetData_ChannelingBeamVisual.h"
#include "R5GameplayCue_ChannelingBeam.generated.h"

class UNiagaraComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5GameplayCue_ChannelingBeam : public AGameplayCueNotify_Actor {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5TargetData_ChannelingBeamVisual TargetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* BeamFX;
    
public:
    AR5GameplayCue_ChannelingBeam(const FObjectInitializer& ObjectInitializer);

};


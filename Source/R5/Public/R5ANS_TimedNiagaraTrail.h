#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraAnimNotifies -ObjectName=AnimNotifyState_TimedNiagaraEffect -FallbackName=AnimNotifyState_TimedNiagaraEffect
#include "AnimNotifyState_TimedNiagaraEffect.h"
#include "R5ANS_TimedNiagaraTrail.generated.h"

class UR5TimedNiagaraTrailParams;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5_API UR5ANS_TimedNiagaraTrail : public UAnimNotifyState_TimedNiagaraEffect {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5TimedNiagaraTrailParams* TrailParams;
    
public:
    UR5ANS_TimedNiagaraTrail();

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraAnimNotifies -ObjectName=AnimNotifyState_TimedNiagaraEffectAdvanced -FallbackName=AnimNotifyState_TimedNiagaraEffectAdvanced
#include "AnimNotifyState_TimedNiagaraEffect.h"
#include "R5NiagaraNotifyParameterValue.h"
#include "R5ANS_TimedNiagaraEffectWithParams.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5_API UR5ANS_TimedNiagaraEffectWithParams : public UAnimNotifyState_TimedNiagaraEffectAdvanced {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableNotifyDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NotifyDurationUserParameter;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FR5NiagaraNotifyParameterValue> CustomValues;
    
public:
    UR5ANS_TimedNiagaraEffectWithParams();

};


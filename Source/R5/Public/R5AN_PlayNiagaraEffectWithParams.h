#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraAnimNotifies -ObjectName=AnimNotify_PlayNiagaraEffect -FallbackName=AnimNotify_PlayNiagaraEffect
#include "AnimNotify_PlayNiagaraEffect.h"
#include "R5NiagaraNotifyParameterValue.h"
#include "R5AN_PlayNiagaraEffectWithParams.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class R5_API UR5AN_PlayNiagaraEffectWithParams : public UAnimNotify_PlayNiagaraEffect {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FR5NiagaraNotifyParameterValue> CustomValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttachToFloor;
    
public:
    UR5AN_PlayNiagaraEffectWithParams();

};


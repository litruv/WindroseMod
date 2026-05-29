#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5AbilityTask_DefaultInstanced -FallbackName=R5AbilityTask_DefaultInstanced
#include "R5AbilityTask_DefaultInstanced.h"
#include "R5AbilityTask_DamageTargetsAndHeal.generated.h"

class AActor;
class UR5DamageTargetsAndHealParams;

UCLASS(Blueprintable)
class R5_API UR5AbilityTask_DamageTargetsAndHeal : public UR5AbilityTask_DefaultInstanced {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5DamageTargetsAndHealParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Targets;
    
public:
    UR5AbilityTask_DamageTargetsAndHeal();

};


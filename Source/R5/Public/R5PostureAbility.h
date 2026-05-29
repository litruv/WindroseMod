#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5PostureAbility.generated.h"

class UAbilitySystemComponent;
class UR5PostureAbilityParams;

UCLASS(Blueprintable)
class R5_API UR5PostureAbility : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5PostureAbilityParams* Params;
    
public:
    UR5PostureAbility();

protected:
    UFUNCTION(BlueprintCallable)
    void OnTakePostureDamage(float RealDamage, float IncomingDamage, float NewPosture, float MaxPosture, const UAbilitySystemComponent* DamageInstigatorASC);
    
};


#pragma once
#include "CoreMinimal.h"
#include "R5Ability.h"
#include "Templates/SubclassOf.h"
#include "R5Ability_PassiveGrantsGameplayEffect.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class R5GAS_API UR5Ability_PassiveGrantsGameplayEffect : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GEClass;
    
public:
    UR5Ability_PassiveGrantsGameplayEffect();

};


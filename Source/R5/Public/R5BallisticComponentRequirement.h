#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectCustomApplicationRequirement -FallbackName=GameplayEffectCustomApplicationRequirement
#include "GameplayEffectCustomApplicationRequirement.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=ER5BLShipArmorType -FallbackName=ER5BLShipArmorType
#include "ER5BLShipArmorType.h"
#include "R5BallisticComponentRequirement.generated.h"

UCLASS(Blueprintable)
class R5_API UR5BallisticComponentRequirement : public UGameplayEffectCustomApplicationRequirement {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5BLShipArmorType ComponentType;
    
public:
    UR5BallisticComponentRequirement();

};


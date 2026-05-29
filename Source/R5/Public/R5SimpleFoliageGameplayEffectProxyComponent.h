#pragma once
#include "CoreMinimal.h"
#include "R5GameplayEffectProxyComponent.h"
#include "R5SimpleFoliageGameplayEffectProxyComponent.generated.h"

class UR5SimpleFoliageDamageableComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5SimpleFoliageGameplayEffectProxyComponent : public UR5GameplayEffectProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5SimpleFoliageDamageableComponent* DamageableComponent;
    
    UR5SimpleFoliageGameplayEffectProxyComponent(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "R5GameplayEffectProxyComponent.h"
#include "R5ASCGameplayEffectProxyComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5ASCGameplayEffectProxyComponent : public UR5GameplayEffectProxyComponent {
    GENERATED_BODY()
public:
    UR5ASCGameplayEffectProxyComponent(const FObjectInitializer& ObjectInitializer);

};


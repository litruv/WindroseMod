#pragma once
#include "CoreMinimal.h"
#include "R5GameplayEffectProxyComponent.h"
#include "R5BuildingGameplayEffectProxyComponent.generated.h"

class UR5BuildingDamageableComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5BuildingGameplayEffectProxyComponent : public UR5GameplayEffectProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5BuildingDamageableComponent* DamageableComponent;
    
    UR5BuildingGameplayEffectProxyComponent(const FObjectInitializer& ObjectInitializer);

};


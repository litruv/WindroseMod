#pragma once
#include "CoreMinimal.h"
#include "R5GameplayEffectProxyComponent.h"
#include "R5DigVolumeGameplayEffectProxyComponent.generated.h"

class UR5DigVolumeDamageableComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5DigVolumeGameplayEffectProxyComponent : public UR5GameplayEffectProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5DigVolumeDamageableComponent* DamageableComponent;
    
    UR5DigVolumeGameplayEffectProxyComponent(const FObjectInitializer& ObjectInitializer);

};


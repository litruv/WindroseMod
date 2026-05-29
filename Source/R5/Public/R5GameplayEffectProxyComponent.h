#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5GameplayEffectProxyComponent.generated.h"

class AActor;
class UR5GameplayEffectProxyComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5GameplayEffectProxyComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UR5GameplayEffectProxyComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static UR5GameplayEffectProxyComponent* GetGameplayEffectProxyComponent(AActor* Actor);
    
};


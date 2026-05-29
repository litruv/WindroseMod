#pragma once
#include "CoreMinimal.h"
#include "R5GameplayEffectProxyComponent.h"
#include "R5GOS_GenericActors_GameplayEffectProxyComponent.generated.h"

class UR5GOS_GenericActors_DamageableComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5GOS_GenericActors_GameplayEffectProxyComponent : public UR5GameplayEffectProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5GOS_GenericActors_DamageableComponent* DamageableComponent;
    
    UR5GOS_GenericActors_GameplayEffectProxyComponent(const FObjectInitializer& ObjectInitializer);

};


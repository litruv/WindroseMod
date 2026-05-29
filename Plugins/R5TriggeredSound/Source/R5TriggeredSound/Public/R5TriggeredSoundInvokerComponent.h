#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5TriggeredSoundInvokerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5TRIGGEREDSOUND_API UR5TriggeredSoundInvokerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UR5TriggeredSoundInvokerComponent(const FObjectInitializer& ObjectInitializer);

};


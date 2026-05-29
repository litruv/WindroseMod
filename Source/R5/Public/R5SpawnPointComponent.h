#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5SpawnPointComponent.generated.h"

UCLASS(Blueprintable, Deprecated, NotPlaceable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UDEPRECATED_R5SpawnPointComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UDEPRECATED_R5SpawnPointComponent(const FObjectInitializer& ObjectInitializer);

};


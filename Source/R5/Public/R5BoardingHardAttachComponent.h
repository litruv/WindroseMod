#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5BoardingHardAttachComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5BoardingHardAttachComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UR5BoardingHardAttachComponent(const FObjectInitializer& ObjectInitializer);

};


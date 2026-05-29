#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5MovableBuildingSupportComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5MovableBuildingSupportComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UR5MovableBuildingSupportComponent(const FObjectInitializer& ObjectInitializer);

};


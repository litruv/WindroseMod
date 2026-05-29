#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5MVVMComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5MODELVIEWVIEWMODEL_API UR5MVVMComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UR5MVVMComponent(const FObjectInitializer& ObjectInitializer);

};


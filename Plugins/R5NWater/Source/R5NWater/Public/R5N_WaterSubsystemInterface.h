#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5N_WaterSubsystemInterface.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5NWATER_API UR5N_WaterSubsystemInterface : public UActorComponent {
    GENERATED_BODY()
public:
    UR5N_WaterSubsystemInterface(const FObjectInitializer& ObjectInitializer);

};


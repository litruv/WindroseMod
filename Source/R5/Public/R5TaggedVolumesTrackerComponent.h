#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5TaggedVolumesTrackerComponent.generated.h"

class UR5TaggedVolumesTrackerParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5TaggedVolumesTrackerComponent : public UActorComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5TaggedVolumesTrackerParams* Params;
    
public:
    UR5TaggedVolumesTrackerComponent(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5TaggedVolume -ObjectName=R5TaggedVolumeComponent -FallbackName=R5TaggedVolumeComponent
#include "R5TaggedVolumeComponent.h"
#include "R5BoardingBattleTaggedVolume.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5BoardingBattleTaggedVolume : public UR5TaggedVolumeComponent {
    GENERATED_BODY()
public:
    UR5BoardingBattleTaggedVolume(const FObjectInitializer& ObjectInitializer);

};


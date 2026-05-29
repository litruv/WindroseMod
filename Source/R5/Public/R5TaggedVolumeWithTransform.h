#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Math/Transform.h"
#include "R5TaggedVolumeWithTransform.generated.h"

class UR5TaggedVolumeComponent;

USTRUCT(BlueprintType)
struct FR5TaggedVolumeWithTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5TaggedVolumeComponent* Volume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform LastTransform;
    
    R5_API FR5TaggedVolumeWithTransform();
};


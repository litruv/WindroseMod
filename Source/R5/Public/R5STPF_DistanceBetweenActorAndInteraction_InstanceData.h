#pragma once
#include "CoreMinimal.h"
#include "R5STPF_DistanceBetweenActorAndInteraction_InstanceData.generated.h"

class AActor;
class UObject;

USTRUCT(BlueprintType)
struct R5_API FR5STPF_DistanceBetweenActorAndInteraction_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* InteractionObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    FR5STPF_DistanceBetweenActorAndInteraction_InstanceData();
};


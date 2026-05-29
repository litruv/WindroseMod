#pragma once
#include "CoreMinimal.h"
#include "R5StateTreeLookAtConditionInstanceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct R5_API FR5StateTreeLookAtConditionInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ViewerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewConeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewDistance;
    
    FR5StateTreeLookAtConditionInstanceData();
};


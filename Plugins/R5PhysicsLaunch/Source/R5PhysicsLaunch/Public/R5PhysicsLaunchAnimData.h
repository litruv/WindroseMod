#pragma once
#include "CoreMinimal.h"
#include "R5PhysicsLaunchAnimData.generated.h"

class UAnimMontage;
class UCurveFloat;

USTRUCT(BlueprintType)
struct FR5PhysicsLaunchAnimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ScaleAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ForwardMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* BackwardMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    R5PHYSICSLAUNCH_API FR5PhysicsLaunchAnimData();
};


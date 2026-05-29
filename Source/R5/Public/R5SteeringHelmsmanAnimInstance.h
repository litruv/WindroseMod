#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "ESteeringState.h"
#include "R5SteeringHelmsmanAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class R5_API UR5SteeringHelmsmanAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SteeringAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SteeringAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteeringState SteeringState;
    
public:
    UR5SteeringHelmsmanAnimInstance();

};


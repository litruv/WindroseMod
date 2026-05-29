#pragma once
#include "CoreMinimal.h"
#include "R5PhysicsLaunchMontageGetUpData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FR5PhysicsLaunchMontageGetUpData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> GetUpMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertActorRotation;
    
    R5PHYSICSLAUNCH_API FR5PhysicsLaunchMontageGetUpData();
};


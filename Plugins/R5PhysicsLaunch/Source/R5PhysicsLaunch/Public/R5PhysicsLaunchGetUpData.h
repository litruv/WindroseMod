#pragma once
#include "CoreMinimal.h"
#include "ER5PhysicsLaunchGetUpType.h"
#include "R5PhysicsLaunchMontageGetUpData.h"
#include "R5PhysicsLaunchGetUpData.generated.h"

USTRUCT(BlueprintType)
struct FR5PhysicsLaunchGetUpData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NeckBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PelvisBone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ER5PhysicsLaunchGetUpType, FR5PhysicsLaunchMontageGetUpData> GetUpMontages;
    
    R5PHYSICSLAUNCH_API FR5PhysicsLaunchGetUpData();
};


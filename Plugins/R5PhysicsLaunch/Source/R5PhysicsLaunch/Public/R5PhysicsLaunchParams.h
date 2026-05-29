#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5PhysicsLaunchAnimData.h"
#include "R5PhysicsLaunchData.h"
#include "R5PhysicsLaunchGameplayData.h"
#include "R5PhysicsLaunchGetUpData.h"
#include "R5PhysicsLaunchPresetsData.h"
#include "R5PhysicsLaunchParams.generated.h"

UCLASS(Blueprintable)
class R5PHYSICSLAUNCH_API UR5PhysicsLaunchParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5PhysicsLaunchData Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5PhysicsLaunchGetUpData GetUpData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5PhysicsLaunchAnimData AnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5PhysicsLaunchGameplayData GameplayData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5PhysicsLaunchPresetsData PresetData;
    
    UR5PhysicsLaunchParams();

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5FollowingProjectileMovementComponentData.h"
#include "R5FollowingProjectileMovementComponentParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5FollowingProjectileMovementComponentParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5FollowingProjectileMovementComponentData Data;
    
    UR5FollowingProjectileMovementComponentParams();

};


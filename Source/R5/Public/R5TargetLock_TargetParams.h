#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5TargetLock_TargetData.h"
#include "R5TargetLock_TargetParams.generated.h"

UCLASS(Blueprintable)
class UR5TargetLock_TargetParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5TargetLock_TargetData Data;
    
    UR5TargetLock_TargetParams();

};


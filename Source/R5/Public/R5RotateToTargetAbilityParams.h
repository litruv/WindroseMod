#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5RotateToTargetAbilityData.h"
#include "R5RotateToTargetAbilityParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5RotateToTargetAbilityParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5RotateToTargetAbilityData Data;
    
    UR5RotateToTargetAbilityParams();

};


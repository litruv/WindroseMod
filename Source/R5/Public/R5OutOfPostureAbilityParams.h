#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5OutOfPostureAbilityData.h"
#include "R5OutOfPostureAbilityParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5OutOfPostureAbilityParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OutOfPostureAbilityData Data;
    
    UR5OutOfPostureAbilityParams();

};


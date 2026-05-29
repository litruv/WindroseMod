#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5PostureAbilityData.h"
#include "R5PostureAbilitySoundData.h"
#include "R5PostureAbilityParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5PostureAbilityParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5PostureAbilityData Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5PostureAbilitySoundData SoundData;
    
    UR5PostureAbilityParams();

};


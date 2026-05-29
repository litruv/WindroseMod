#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5StaminaAbilityData.h"
#include "R5StaminaAbilityParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5StaminaAbilityParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5StaminaAbilityData Data;
    
    UR5StaminaAbilityParams();

};


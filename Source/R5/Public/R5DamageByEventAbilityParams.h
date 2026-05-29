#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5DamageByEventAbilityData.h"
#include "R5DamageByEventAbilityParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5DamageByEventAbilityParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5DamageByEventAbilityData Data;
    
    UR5DamageByEventAbilityParams();

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5DashAbilityGEData.h"
#include "R5DashAbilityTagData.h"
#include "R5Ability_DashTechParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5Ability_DashTechParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5DashAbilityTagData TagData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5DashAbilityGEData GEData;
    
    UR5Ability_DashTechParams();

};


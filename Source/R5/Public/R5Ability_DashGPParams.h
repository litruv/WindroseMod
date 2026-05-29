#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5DashAbilityCombatDashData.h"
#include "R5DashAbilityDefaultDashData.h"
#include "R5DashAbilityMovementDashData.h"
#include "R5Ability_DashGPParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5Ability_DashGPParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5DashAbilityDefaultDashData DefaultDashData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5DashAbilityCombatDashData CombatDashData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5DashAbilityMovementDashData MovementDashData;
    
    UR5Ability_DashGPParams();

};


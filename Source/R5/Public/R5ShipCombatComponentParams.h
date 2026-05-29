#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5ShipInputToGameplayTag.h"
#include "R5ShipCombatComponentParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5ShipCombatComponentParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntervalBetweenShoots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ShipInputToGameplayTag AttackInputData;
    
    UR5ShipCombatComponentParams();

};


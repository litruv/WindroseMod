#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5ShipShootHandlingAbilityCommonTechData.h"
#include "R5ShipShootHandlingAbilityShootTechData.h"
#include "R5ShipShootHandlingActiveReloadTechData.h"
#include "R5ShipShootHandlingAbilityTechData.generated.h"

UCLASS(Blueprintable)
class R5_API UR5ShipShootHandlingAbilityTechData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ShipShootHandlingAbilityCommonTechData CommonTechData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ShipShootHandlingAbilityShootTechData ShootTechData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ShipShootHandlingActiveReloadTechData ActiveReloadTechData;
    
    UR5ShipShootHandlingAbilityTechData();

};


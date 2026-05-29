#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=ER5BLShipArmorType -FallbackName=ER5BLShipArmorType
#include "ER5BLShipArmorType.h"
#include "R5DamageCalculation.h"
#include "R5CannonBallDamageCalculation.generated.h"

UCLASS(Blueprintable)
class R5_API UR5CannonBallDamageCalculation : public UR5DamageCalculation {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5BLShipArmorType ArmorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorThicknessWeakSpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag WeakSpotTag;
    
public:
    UR5CannonBallDamageCalculation();

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5BLShipDamagedVisualPoints_V0_9_0.h"
#include "R5BLShipVisualArmorDamage_V0_9_0.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLShipVisualArmorDamage_V0_9_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ArmorTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLShipDamagedVisualPoints_V0_9_0 DamagedVisualPoint;
    
    FR5BLShipVisualArmorDamage_V0_9_0();
};


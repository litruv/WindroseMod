#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5BLShipDamagedVisualPoints.h"
#include "R5BLShipVisualArmorDamage.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLShipVisualArmorDamage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ArmorTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLShipDamagedVisualPoints DamagedVisualPoint;
    
    FR5BLShipVisualArmorDamage();
};


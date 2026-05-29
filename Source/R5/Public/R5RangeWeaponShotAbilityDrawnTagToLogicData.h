#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "R5RangeWeaponShotAbilityLogicData.h"
#include "R5RangeWeaponShotAbilityDrawnTagToLogicData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5RangeWeaponShotAbilityDrawnTagToLogicData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DrawnWeaponTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5RangeWeaponShotAbilityLogicData LogicData;
    
    FR5RangeWeaponShotAbilityDrawnTagToLogicData();
};


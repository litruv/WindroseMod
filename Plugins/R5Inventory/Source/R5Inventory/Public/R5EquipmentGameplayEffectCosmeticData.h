#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5EquipmentGameplayEffectCosmeticData.generated.h"

USTRUCT(BlueprintType)
struct R5INVENTORY_API FR5EquipmentGameplayEffectCosmeticData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AttackTrailTag;
    
    FR5EquipmentGameplayEffectCosmeticData();
};


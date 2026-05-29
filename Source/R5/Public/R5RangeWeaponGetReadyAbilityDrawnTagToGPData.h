#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "R5RangeWeaponGetReadyAbilityGPData.h"
#include "R5RangeWeaponGetReadyAbilityDrawnTagToGPData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5RangeWeaponGetReadyAbilityDrawnTagToGPData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DrawnWeaponTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5RangeWeaponGetReadyAbilityGPData GPData;
    
    FR5RangeWeaponGetReadyAbilityDrawnTagToGPData();
};


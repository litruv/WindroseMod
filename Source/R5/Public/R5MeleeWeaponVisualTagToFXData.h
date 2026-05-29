#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
#include "GameplayTagContainer.h"
#include "R5MeleeWeaponVisualVFXData.h"
#include "R5MeleeWeaponVisualTagToFXData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5MeleeWeaponVisualTagToFXData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery TagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5MeleeWeaponVisualVFXData VFXData;
    
    FR5MeleeWeaponVisualTagToFXData();
};


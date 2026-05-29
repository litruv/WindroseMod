#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "ER5DrawWeaponAction.h"
#include "R5DrawWeaponAdditionalTagsData.h"
#include "R5DrawWeaponPerInstanceTimeData.h"
#include "R5DrawWeaponAbilityGPData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5DrawWeaponAbilityGPData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ER5DrawWeaponAction, FR5DrawWeaponAdditionalTagsData> ActionToAdditionalActionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5DrawWeaponPerInstanceTimeData DefaultTimeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FR5DrawWeaponPerInstanceTimeData> ActivationTagTagToTimeData;
    
    FR5DrawWeaponAbilityGPData();
};


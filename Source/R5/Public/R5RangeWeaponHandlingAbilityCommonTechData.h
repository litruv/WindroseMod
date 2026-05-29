#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "R5RangeWeaponHandlingAbilityCommonTechData.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FR5RangeWeaponHandlingAbilityCommonTechData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> OngoingGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlockFullInitialClipTags;
    
    R5_API FR5RangeWeaponHandlingAbilityCommonTechData();
};


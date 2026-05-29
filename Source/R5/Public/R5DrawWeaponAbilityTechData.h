#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "ER5DrawWeaponAction.h"
#include "R5DrawWeaponAbilityGETechData.h"
#include "R5DrawWeaponAbilityTechData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5DrawWeaponAbilityTechData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ER5DrawWeaponAction, FR5DrawWeaponAbilityGETechData> ActionToGEData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> InstantEndAbilityCmd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> PutAwayWeaponCmd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ReactivateWeaponCmd;
    
    FR5DrawWeaponAbilityTechData();
};


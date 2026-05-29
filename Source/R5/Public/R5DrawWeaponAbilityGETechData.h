#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "R5DrawWeaponAbilityGETechData.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct R5_API FR5DrawWeaponAbilityGETechData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DynamicGrantedTags;
    
    FR5DrawWeaponAbilityGETechData();
};


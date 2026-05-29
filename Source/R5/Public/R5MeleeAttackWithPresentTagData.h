#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "ER5AttackType.h"
#include "R5MeleeSectionData.h"
#include "R5MeleeAttackWithPresentTagData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5MeleeAttackWithPresentTagData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsToAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5MeleeSectionData AttackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ER5AttackType> AttackInputs;
    
    FR5MeleeAttackWithPresentTagData();
};


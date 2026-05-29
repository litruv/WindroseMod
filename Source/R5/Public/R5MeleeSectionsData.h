#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "ER5AttackType.h"
#include "R5MeleeAttackWithPresentTagData.h"
#include "R5MeleeFromMoveStateKey.h"
#include "R5MeleeSectionData.h"
#include "R5MeleeSectionsComboData.h"
#include "Templates/SubclassOf.h"
#include "R5MeleeSectionsData.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct R5_API FR5MeleeSectionsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FR5MeleeFromMoveStateKey, FR5MeleeSectionData> MoveStateKeyToAttackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5MeleeAttackWithPresentTagData> AttackByPresentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ER5AttackType, FGameplayTag> AttackTagFromType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSubclassOf<UGameplayEffect>> AttackTagToCooldownGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5MeleeSectionData> Sections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ER5AttackType, FR5MeleeSectionsComboData> ComboFromType;
    
    FR5MeleeSectionsData();
};


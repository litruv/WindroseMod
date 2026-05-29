#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLItemAttributeModifiersData -FallbackName=R5BLItemAttributeModifiersData
#include "R5BLItemAttributeModifiersData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLItemsStackData -FallbackName=R5BLItemsStackData
#include "R5BLItemsStackData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLRewardWithAttributeModifier -FallbackName=R5BLRewardWithAttributeModifier
#include "R5BLRewardWithAttributeModifier.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioGraphNodeTask -FallbackName=R5ScenarioGraphNodeTask
#include "R5ScenarioGraphNodeTask.h"
#include "R5ScenarioTask_SpawnPoiChest.generated.h"

class AR5ChestActor;
class UR5BLLootParams;

UCLASS(Abstract, Blueprintable)
class R5_API UR5ScenarioTask_SpawnPoiChest : public UR5ScenarioGraphNodeTask {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AR5ChestActor> ChestClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ChestTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpawnPointTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLItemsStackData> Reward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRewardWithAttributeModifier RewardWithAttributeModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLLootParams> LootTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLItemAttributeModifiersData ItemAttributeModifiersForLootTable;
    
public:
    UR5ScenarioTask_SpawnPoiChest();

};


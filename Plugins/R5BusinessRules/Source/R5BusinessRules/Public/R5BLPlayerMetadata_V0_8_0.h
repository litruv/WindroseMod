#pragma once
#include "CoreMinimal.h"
#include "R5BLCharacterCustomization_V0_8_0.h"
#include "R5BLDropInventory_V0_8_0.h"
#include "R5BLEntityProgression_V0_8_0.h"
#include "R5BLInventoryMetadata_V0_8_0.h"
#include "R5BLLootMetaData_V0_8_0.h"
#include "R5BLRecipesStack_V0_8_0.h"
#include "R5BLUnlockedRecipe_V0_8_0.h"
#include "R5BLPlayerMetadata_V0_8_0.generated.h"

class UR5BLQuestParams;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLPlayerMetadata_V0_8_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLUnlockedRecipe_V0_8_0> UnlockedRecipes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLDropInventory_V0_8_0 DropInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLInventoryMetadata_V0_8_0 InventoryMetadata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLRecipesStack_V0_8_0> FinishedRecipes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLCharacterCustomization_V0_8_0 CharacterCustomization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLLootMetaData_V0_8_0 LootMetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLQuestParams> PinnedQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLEntityProgression_V0_8_0 PlayerProgression;
    
    FR5BLPlayerMetadata_V0_8_0();
};


#pragma once
#include "CoreMinimal.h"
#include "R5BLCharacterCustomization.h"
#include "R5BLDropInventory.h"
#include "R5BLEntityProgression.h"
#include "R5BLInventoryMetadata.h"
#include "R5BLLootMetaData.h"
#include "R5BLRecipesStack.h"
#include "R5BLUnlockedRecipe.h"
#include "R5BLPlayerMetadata.generated.h"

class UR5BLQuestParams;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLPlayerMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLUnlockedRecipe> UnlockedRecipes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLDropInventory DropInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLInventoryMetadata InventoryMetadata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLRecipesStack> FinishedRecipes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLCharacterCustomization CharacterCustomization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLLootMetaData LootMetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLQuestParams> PinnedQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLEntityProgression PlayerProgression;
    
    FR5BLPlayerMetadata();
};


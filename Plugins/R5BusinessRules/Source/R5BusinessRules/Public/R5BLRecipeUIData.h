#pragma once
#include "CoreMinimal.h"
#include "ER5BLRecipeType.h"
#include "R5BLRecipeUILootTableData.h"
#include "R5BLRecipeUIData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLRecipeUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5BLRecipeType RecipeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseLootTableUIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecipeUILootTableData LootTableUIData;
    
    FR5BLRecipeUIData();
};


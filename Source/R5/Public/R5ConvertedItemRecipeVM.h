#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLItemsStackData -FallbackName=R5BLItemsStackData
#include "R5BLItemsStackData.h"
#include "R5RecipeVM.h"
#include "R5ConvertedItemRecipeVM.generated.h"

UCLASS(Blueprintable)
class R5_API UR5ConvertedItemRecipeVM : public UR5RecipeVM {
    GENERATED_BODY()
public:
    UR5ConvertedItemRecipeVM();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FR5BLItemsStackData GetConvertedItemsStack() const;
    
};


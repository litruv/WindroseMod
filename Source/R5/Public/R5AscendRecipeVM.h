#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLItem -FallbackName=R5BLItem
#include "R5BLItem.h"
#include "R5RecipeVM.h"
#include "R5AscendRecipeVM.generated.h"

UCLASS(Blueprintable)
class R5_API UR5AscendRecipeVM : public UR5RecipeVM {
    GENERATED_BODY()
public:
    UR5AscendRecipeVM();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FR5BLItem GetRecipeResultItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FR5BLItem GetCurrentItem() const;
    
};


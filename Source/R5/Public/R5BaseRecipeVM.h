#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=ER5BLCraftAvailability -FallbackName=ER5BLCraftAvailability
#include "ER5BLCraftAvailability.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMListEntityVM -FallbackName=R5MVVMListEntityVM
#include "R5MVVMListEntityVM.h"
#include "R5BaseRecipeVM.generated.h"

UCLASS(Abstract, Blueprintable)
class R5_API UR5BaseRecipeVM : public UR5MVVMListEntityVM {
    GENERATED_BODY()
public:
    UR5BaseRecipeVM();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    ER5BLCraftAvailability CanExecuteRecipe(int32 CountRecipes) const;
    
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMNumberStepperVM -FallbackName=R5MVVMNumberStepperVM
#include "R5MVVMNumberStepperVM.h"
#include "R5SelectedRecipeNumberStepperVM.generated.h"

class UR5RecipeVM;

UCLASS(Blueprintable)
class R5_API UR5SelectedRecipeNumberStepperVM : public UR5MVVMNumberStepperVM {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5RecipeVM* TargetRecipeVM;
    
public:
    UR5SelectedRecipeNumberStepperVM();

protected:
    UFUNCTION(BlueprintCallable)
    void OnTargetRecipeUpdated();
    
};


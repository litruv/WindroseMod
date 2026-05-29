#pragma once
#include "CoreMinimal.h"
#include "R5BaseSelectedRecipePanelVM.h"
#include "R5SelectedRecipePanelVM.generated.h"

class UR5SelectedRecipeNumberStepperVM;

UCLASS(Blueprintable)
class R5_API UR5SelectedRecipePanelVM : public UR5BaseSelectedRecipePanelVM {
    GENERATED_BODY()
public:
    UR5SelectedRecipePanelVM();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5SelectedRecipeNumberStepperVM* GetNumberStepper() const;
    
};


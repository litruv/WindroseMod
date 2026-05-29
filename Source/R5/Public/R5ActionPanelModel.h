#pragma once
#include "CoreMinimal.h"
#include "R5BaseInventoryModel.h"
#include "R5ActionPanelModel.generated.h"

class APawn;

UCLASS(Blueprintable)
class R5_API UR5ActionPanelModel : public UR5BaseInventoryModel {
    GENERATED_BODY()
public:
    UR5ActionPanelModel();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPossessedPawnChanged(APawn* OldPawn, APawn* NewPawn);
    
};


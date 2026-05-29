#pragma once
#include "CoreMinimal.h"
#include "R5SC_Base.h"
#include "R5ActionPanelHFSMComponent.generated.h"

class UR5BaseInventoryVM;
class UR5InventoriesScreenParams;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5ActionPanelHFSMComponent : public UR5SC_Base {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5InventoriesScreenParams* ActionPanelParams;
    
public:
    UR5ActionPanelHFSMComponent();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5BaseInventoryVM* GetActionPanelVM() const;
    
};


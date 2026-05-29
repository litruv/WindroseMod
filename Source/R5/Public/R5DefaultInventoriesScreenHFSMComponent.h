#pragma once
#include "CoreMinimal.h"
#include "R5SC_Base.h"
#include "R5DefaultInventoriesScreenHFSMComponent.generated.h"

class UR5DefaultInventoryVM;
class UR5InventoriesScreenParams;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5DefaultInventoriesScreenHFSMComponent : public UR5SC_Base {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5InventoriesScreenParams* InventoriesScreenParams;
    
public:
    UR5DefaultInventoriesScreenHFSMComponent();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5DefaultInventoryVM* GetDefaultInventoryVM() const;
    
};


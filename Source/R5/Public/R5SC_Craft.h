#pragma once
#include "CoreMinimal.h"
#include "R5SC_BaseCraft.h"
#include "R5SC_Craft.generated.h"

class UR5CraftVM;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5SC_Craft : public UR5SC_BaseCraft {
    GENERATED_BODY()
public:
    UR5SC_Craft();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5CraftVM* GetItemCraftVM() const;
    
};


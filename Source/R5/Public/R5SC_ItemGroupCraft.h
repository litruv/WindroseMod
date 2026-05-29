#pragma once
#include "CoreMinimal.h"
#include "R5SC_BaseCraft.h"
#include "R5SC_ItemGroupCraft.generated.h"

class UR5ItemGroupCraftVM;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5SC_ItemGroupCraft : public UR5SC_BaseCraft {
    GENERATED_BODY()
public:
    UR5SC_ItemGroupCraft();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5ItemGroupCraftVM* GetItemGroupCraftVM() const;
    
};


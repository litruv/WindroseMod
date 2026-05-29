#pragma once
#include "CoreMinimal.h"
#include "R5SC_Craft.h"
#include "R5SC_AscendCraft.generated.h"

class UR5AscendCraftVM;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5SC_AscendCraft : public UR5SC_Craft {
    GENERATED_BODY()
public:
    UR5SC_AscendCraft();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5AscendCraftVM* GetAscendCraftVM() const;
    
};


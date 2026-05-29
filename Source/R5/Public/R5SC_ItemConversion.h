#pragma once
#include "CoreMinimal.h"
#include "R5SC_Craft.h"
#include "R5SC_ItemConversion.generated.h"

class UR5ItemConversionVM;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5SC_ItemConversion : public UR5SC_Craft {
    GENERATED_BODY()
public:
    UR5SC_ItemConversion();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5ItemConversionVM* GetItemConversionVM() const;
    
};


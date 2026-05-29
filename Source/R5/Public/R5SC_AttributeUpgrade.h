#pragma once
#include "CoreMinimal.h"
#include "R5SC_BaseCraft.h"
#include "R5SC_AttributeUpgrade.generated.h"

class UR5AttributeUpgradeVM;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5SC_AttributeUpgrade : public UR5SC_BaseCraft {
    GENERATED_BODY()
public:
    UR5SC_AttributeUpgrade();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5AttributeUpgradeVM* GetAttributeUpgradeVM() const;
    
};


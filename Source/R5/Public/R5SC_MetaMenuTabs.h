#pragma once
#include "CoreMinimal.h"
#include "R5SC_Base.h"
#include "R5SC_MetaMenuTabs.generated.h"

class UR5MetaMenuTabsVM;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5SC_MetaMenuTabs : public UR5SC_Base {
    GENERATED_BODY()
public:
    UR5SC_MetaMenuTabs();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5MetaMenuTabsVM* GetMetaMenuTabsVM() const;
    
};


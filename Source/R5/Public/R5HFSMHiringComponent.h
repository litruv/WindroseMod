#pragma once
#include "CoreMinimal.h"
#include "R5SC_Base.h"
#include "R5HFSMHiringComponent.generated.h"

class UR5HiringVM;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5HFSMHiringComponent : public UR5SC_Base {
    GENERATED_BODY()
public:
    UR5HFSMHiringComponent();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5HiringVM* GetHiringVM() const;
    
};


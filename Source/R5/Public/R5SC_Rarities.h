#pragma once
#include "CoreMinimal.h"
#include "R5SC_Base.h"
#include "R5SC_Rarities.generated.h"

class UR5RaritiesVM;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5SC_Rarities : public UR5SC_Base {
    GENERATED_BODY()
public:
    UR5SC_Rarities();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5RaritiesVM* GetRaritiesVM() const;
    
};


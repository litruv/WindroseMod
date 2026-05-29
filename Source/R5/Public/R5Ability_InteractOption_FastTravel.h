#pragma once
#include "CoreMinimal.h"
#include "R5Ability_InteractOption_Base.h"
#include "R5Ability_InteractOption_FastTravel.generated.h"

class UR5FastTravelComponent;

UCLASS(Blueprintable)
class R5_API UR5Ability_InteractOption_FastTravel : public UR5Ability_InteractOption_Base {
    GENERATED_BODY()
public:
    UR5Ability_InteractOption_FastTravel();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5FastTravelComponent* GetSourceFastTravel() const;
    
};


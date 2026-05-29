#pragma once
#include "CoreMinimal.h"
#include "R5MarkerModelPawn.h"
#include "R5MarkerModelPlayer.generated.h"

UCLASS(Blueprintable, EditInlineNew, HideDropdown)
class UR5MarkerModelPlayer : public UR5MarkerModelPawn {
    GENERATED_BODY()
public:
    UR5MarkerModelPlayer();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerInitialized();
    
protected:
    UFUNCTION(BlueprintCallable)
    void NickNameChanged(const FString& NickNameName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocallyControlled() const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "R5CharacterFsmTransitionTrigger.h"
#include "R5CharacterFsmTransitionTrigger_PlayerInput.generated.h"

class UInputAction;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5_API UR5CharacterFsmTransitionTrigger_PlayerInput : public UR5CharacterFsmTransitionTrigger {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UInputAction*> InputActions;
    
public:
    UR5CharacterFsmTransitionTrigger_PlayerInput();

};


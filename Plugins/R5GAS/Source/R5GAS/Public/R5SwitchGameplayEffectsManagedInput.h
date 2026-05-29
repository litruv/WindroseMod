#pragma once
#include "CoreMinimal.h"
#include "R5SwitchGameplayEffectsManagedInput.generated.h"

class UInputAction;
class UTexture2D;

USTRUCT(BlueprintType)
struct R5GAS_API FR5SwitchGameplayEffectsManagedInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* InputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    FR5SwitchGameplayEffectsManagedInput();
};


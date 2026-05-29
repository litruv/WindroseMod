#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectContextHandle -FallbackName=GameplayEffectContextHandle
#include "R5GATD_OutOfPostureSound.h"
#include "R5PostureFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class R5_API UR5PostureFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UR5PostureFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void GetOutOfPostureSoundTargetData(const FGameplayEffectContextHandle& ContextHandle, FR5GATD_OutOfPostureSound& OutTargetData, bool& bOutSuccess);
    
};


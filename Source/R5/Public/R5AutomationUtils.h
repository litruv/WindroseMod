#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
#include "R5AutomationUtils.generated.h"

class UWidget;

UCLASS(Blueprintable)
class R5_API UR5AutomationUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UR5AutomationUtils();

    UFUNCTION(BlueprintCallable)
    static void AddAutoTestID(UWidget* Widget, FName ID);
    
};


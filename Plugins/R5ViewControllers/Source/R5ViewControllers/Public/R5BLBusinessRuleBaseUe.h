#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5BLBusinessRuleBaseUe.generated.h"

UCLASS(Abstract, Blueprintable)
class R5VIEWCONTROLLERS_API UR5BLBusinessRuleBaseUe : public UObject {
    GENERATED_BODY()
public:
    UR5BLBusinessRuleBaseUe();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetModelName() const;
    
};


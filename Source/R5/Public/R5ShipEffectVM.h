#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLEffectWithCostUIData -FallbackName=R5BLEffectWithCostUIData
#include "R5BLEffectWithCostUIData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMListEntityVM -FallbackName=R5MVVMListEntityVM
#include "R5MVVMListEntityVM.h"
#include "R5ShipEffectVM.generated.h"

UCLASS(Blueprintable)
class R5_API UR5ShipEffectVM : public UR5MVVMListEntityVM {
    GENERATED_BODY()
public:
    UR5ShipEffectVM();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FR5BLEffectWithCostUIData GetEffectUIData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetEffectTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEffectInitialDuration() const;
    
};


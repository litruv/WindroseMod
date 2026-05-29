#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAttribute -FallbackName=GameplayAttribute
#include "AttributeSet.h"
#include "R5ModMagCalc_SumModifiers.h"
#include "R5ModMagCalc_SumModifiersFromMaxAttribute.generated.h"

UCLASS(Blueprintable)
class R5GAS_API UR5ModMagCalc_SumModifiersFromMaxAttribute : public UR5ModMagCalc_SumModifiers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute AttributeBased;
    
    UR5ModMagCalc_SumModifiersFromMaxAttribute();

};


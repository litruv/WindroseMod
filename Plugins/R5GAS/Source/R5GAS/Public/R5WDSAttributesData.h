#pragma once
#include "CoreMinimal.h"
#include "R5WDSBoolAttributeData.h"
#include "R5WDSFloatAttributeData.h"
#include "R5WDSTagAttributeData.h"
#include "Templates/SubclassOf.h"
#include "R5WDSAttributesData.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct R5GAS_API FR5WDSAttributesData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> WDSAttributesGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> WDSStartupEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5WDSFloatAttributeData> WDSFloatAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5WDSTagAttributeData> WDSTagAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5WDSBoolAttributeData> WDSBoolAttributes;
    
    FR5WDSAttributesData();
};


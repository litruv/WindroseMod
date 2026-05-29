#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "R5RecallAbilityData.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FR5RecallAbilityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> OngoingGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FinishMontageSection;
    
    R5_API FR5RecallAbilityData();
};


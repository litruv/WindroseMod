#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "R5PairedActionTargetGEData.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FR5PairedActionTargetGEData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> ApplyOnEndAbility;
    
    R5_API FR5PairedActionTargetGEData();
};


#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "R5MeleeAdditionalGEData.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct R5_API FR5MeleeAdditionalGEData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> GEs;
    
    FR5MeleeAdditionalGEData();
};


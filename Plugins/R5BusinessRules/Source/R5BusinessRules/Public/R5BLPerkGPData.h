#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "R5BLPerkGPData.generated.h"

class UGameplayAbility;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLPerkGPData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayAbility>> Abilities;
    
    FR5BLPerkGPData();
};


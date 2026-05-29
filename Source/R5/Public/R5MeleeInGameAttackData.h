#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "R5MeleeInGameAttackData.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FR5MeleeInGameAttackData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GE;
    
    R5_API FR5MeleeInGameAttackData();
};


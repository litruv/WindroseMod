#pragma once
#include "CoreMinimal.h"
#include "ER5AttackType.h"
#include "R5AttackActionData.generated.h"

class UInputAction;

USTRUCT(BlueprintType)
struct FR5AttackActionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* IA_Modifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5AttackType AttackType;
    
    R5_API FR5AttackActionData();
};


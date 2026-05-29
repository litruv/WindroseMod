#pragma once
#include "CoreMinimal.h"
#include "ER5AttackType.h"
#include "R5AttackActionData.h"
#include "R5InputActionData.generated.h"

USTRUCT(BlueprintType)
struct FR5InputActionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5AttackType DefaultAttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5AttackActionData> AttackActions;
    
    R5_API FR5InputActionData();
};


#pragma once
#include "CoreMinimal.h"
#include "EMovementState.h"
#include "ER5AttackType.h"
#include "R5MeleeFromMoveStateKey.generated.h"

USTRUCT(BlueprintType)
struct FR5MeleeFromMoveStateKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovementState MovementState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5AttackType AttackInput;
    
    R5_API FR5MeleeFromMoveStateKey();
};
FORCEINLINE uint32 GetTypeHash(const FR5MeleeFromMoveStateKey) { return 0; }


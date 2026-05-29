#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "ER5AttackType.h"
#include "R5InputActionData.h"
#include "R5AttackInputData.generated.h"

class UInputAction;

USTRUCT(BlueprintType)
struct FR5AttackInputData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UInputAction*, FR5InputActionData> InputActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ER5AttackType, FGameplayTag> AttackInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToRemoveAttackIntention;
    
    R5_API FR5AttackInputData();
};


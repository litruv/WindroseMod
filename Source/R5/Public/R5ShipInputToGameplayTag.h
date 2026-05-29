#pragma once
#include "CoreMinimal.h"
#include "R5ShipInputToGameplayTag.generated.h"

class UInputAction;
class UInputMappingContext;

USTRUCT(BlueprintType)
struct FR5ShipInputToGameplayTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* SingleShootInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* ShootInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputMappingContext* CombatIMC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PriorityIMC;
    
    R5_API FR5ShipInputToGameplayTag();
};


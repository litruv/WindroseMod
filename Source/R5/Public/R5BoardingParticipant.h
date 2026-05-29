#pragma once
#include "CoreMinimal.h"
#include "R5BoardingInterval.h"
#include "R5BoardingParticipant.generated.h"

class AR5PlayerState;
class UR5BoardingComponent;

USTRUCT(BlueprintType)
struct FR5BoardingParticipant {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AR5PlayerState>> Players;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UR5BoardingComponent> Boarding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BoardingInterval Interval;
    
    R5_API FR5BoardingParticipant();
};


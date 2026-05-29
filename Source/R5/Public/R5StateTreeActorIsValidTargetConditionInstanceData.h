#pragma once
#include "CoreMinimal.h"
#include "R5StateTreeActorIsValidTargetConditionInstanceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct R5_API FR5StateTreeActorIsValidTargetConditionInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    FR5StateTreeActorIsValidTargetConditionInstanceData();
};


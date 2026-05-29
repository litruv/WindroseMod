#pragma once
#include "CoreMinimal.h"
#include "R5StateTreeActorIsAliveConditionInstanceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct R5_API FR5StateTreeActorIsAliveConditionInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    FR5StateTreeActorIsAliveConditionInstanceData();
};


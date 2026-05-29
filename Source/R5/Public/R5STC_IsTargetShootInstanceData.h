#pragma once
#include "CoreMinimal.h"
#include "R5STC_IsTargetShootInstanceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct R5_API FR5STC_IsTargetShootInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Victim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Shooter;
    
    FR5STC_IsTargetShootInstanceData();
};


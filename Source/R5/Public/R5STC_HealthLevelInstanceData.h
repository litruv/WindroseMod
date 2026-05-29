#pragma once
#include "CoreMinimal.h"
#include "R5STC_HealthLevelInstanceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct R5_API FR5STC_HealthLevelInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RelativeHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbsoluteHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRelative;
    
    FR5STC_HealthLevelInstanceData();
};

